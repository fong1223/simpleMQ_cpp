#pragma once
#include <memory>
#include <boost/asio.hpp>
#include <boost/thread.hpp>

namespace message {
	class Worker {
	public:
		boost::asio::io_context io_context_;
	private:
		typedef boost::asio::executor_work_guard<boost::asio::io_context::executor_type> io_worker;
		size_t thread_count_;
		boost::thread_group thread_group_;
		io_worker io_worker_;
	public:
	
		Worker() = delete;
		Worker(const Worker&) = delete;
		Worker& operator=(const Worker&) = delete;
		
		explicit Worker(size_t thread_count)
			: io_context_(thread_count)
			, io_worker_(boost::asio::make_work_guard(io_context_))
			, thread_count_(thread_count)
		{}
		virtual ~Worker() { stop(); }

		void run() {
			for (size_t i = 0; i < thread_count_; ++i) {
				thread_group_.create_thread([this]() { io_context_.run(); });
			}
		}
		void stop() {
			io_worker_.reset();
			io_context_.stop();
			thread_group_.join_all();
		}
	};
}