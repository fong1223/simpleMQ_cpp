#pragma once
#include <map>
#include <memory>
#include <vector>
#include <string>
#include <shared_mutex>

namespace message {
	template<typename DataType> using Handler = std::function<void(std::shared_ptr<DataType>)>;
	template<typename DataType>
	class Channel {
		std::shared_mutex  mutex_;
		std::map<std::string, Handler<DataType>> subscribers_map_;
	public:
		Channel() {}
		virtual ~Channel() {
			std::lock_guard<std::shared_mutex> guard(mutex_);
			subscribers_map_.clear();
		}

		void subscribe(const std::string& listener_id, const Handler<DataType>& listener) {
			std::lock_guard<std::shared_mutex> guard(mutex_);
			subscribers_map_.insert(std::make_pair(listener_id, listener));
		}

		void subscribe(const std::string& listener_id, Handler<DataType>&& listener) {
			std::lock_guard<std::shared_mutex> guard(mutex_);
			subscribers_map_.insert(std::make_pair(listener_id, std::move(listener)));
		}
		
		void unsubscribe(const std::string& listener_id) {
			std::lock_guard<std::shared_mutex> guard(mutex_);
			subscribers_map_.erase(listener_id);
		}

		void broadcast(const DataType& data) {
			auto data_ptr = std::make_shared<DataType>(data);
			std::shared_lock<std::shared_mutex> guard(mutex_);
			for (auto listener : subscribers_map_) {
				auto handler = listener.second;
				if (handler) {
					handler(data_ptr);
				}
			}
		}

		void broadcast(DataType&& data) {
			auto data_ptr = std::make_shared<DataType>(std::move(data));
			std::shared_lock<std::shared_mutex> guard(mutex_);
			for (auto listener : subscribers_map_) {
				auto handler = listener.second;
				if (handler) {
					handler(data_ptr);
				}
			}
		}

		void broadcast(std::shared_ptr<DataType> data_ptr) {
			std::shared_lock<std::shared_mutex> guard(mutex_);
			for (auto listener : subscribers_map_) {
				auto handler = listener.second;
				if (handler) {
					handler(data_ptr);
				}
			}
		}
	};

	using MessageChannel = Channel<std::string>;
	using MessageChannelPtr = std::shared_ptr<MessageChannel>;
	using ChannelListener = Handler<std::string>;
}