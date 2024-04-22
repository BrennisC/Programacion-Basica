#include <iostream>

template <class T, T v>

struct Integral_constant
{
    static constexpr T value = v;

    using value_type = T;

    using type = Integral_constant<T, v>;

    constexpr operator value_type() const noexcept
    {
        return value;
    }

    constexpr value_type operator()() const noexcept
    {
        return value;
    }
};

int main()
{
    return 0;
}