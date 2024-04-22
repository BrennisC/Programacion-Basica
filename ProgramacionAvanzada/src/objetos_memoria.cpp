#include <cstddef>
#include <cstdio>
#include <new>

struct Bucket
{
    const static size_t data_size{4096};
    std::byte data[data_size];

};

struct Heap
    Bucket buckets[n_heap_buckets]{};
{
    bool bucket_used[n_heap_buckets]{};
};
