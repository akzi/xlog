#pragma once
#include <tuple>
#include <atomic>
#include <queue>
namespace xlog
{
	template<typename T, typename Tuple>
	struct  TupleIndex;

	template<typename T, typename ...Types>
	struct TupleIndex<T, std::tuple<T, Types...>>
	{
		static constexpr const short index = 0;
	};

	template<typename T, typename U, typename ...Types>
	struct TupleIndex<T, std::tuple<U, Types...>>
	{
		static constexpr const short index = 
			TupleIndex<T, std::tuple<Types...>>::index + 1;
	};
	struct buffer 
	{

	};
	struct xlog
	{

		xlog()
			:worker_(&xlog::write_log,this)
		{

		}
	private:
		void write_log()
		{
			while(!stop_)
			{

			}
		}
		std::queue<buffer> buffers_;
		std::atomic_bool stop_ = false;
		std::thread worker_;
	};
}