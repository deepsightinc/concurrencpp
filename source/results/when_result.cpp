#include "concurrencpp/results/when_result.h"

namespace concurrencpp {
lazy_result<void>
AwaitOther(details::when_result_helper::when_all_awaitable &&awaitable) {
  co_await awaitable;
}
} // namespace concurrencpp
