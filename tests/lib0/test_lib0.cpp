#include <lib0/lib.hpp>

DOCTEST_TEST_SUITE_BEGIN("test_lib0");

DOCTEST_TEST_CASE("lib0::fun returns 84")
{
    DOCTEST_CHECK_EQ(lib0::fun(), 84);
}

DOCTEST_TEST_SUITE_END();
