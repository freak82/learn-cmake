#include "app0/app.hpp"
#include <lib0/lib.hpp>

int main()
{
    std::println("the app0::fun result: {}", app0::fun());
    std::println("the lib0::fun result: {}", lib0::fun());
    return 0;
}
