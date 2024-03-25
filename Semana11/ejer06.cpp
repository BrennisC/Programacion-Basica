#include <atomic>
#include <memory>
int main()
{
    std::atomic<std::shared_ptr<int>> ptr;
    ptr.store(std::make_shared<int>(23));
    std::shared_ptr<int> p = ptr.load();
    return 0;
}