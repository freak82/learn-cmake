#include <app0/app.hpp>

DOCTEST_TEST_SUITE_BEGIN("test_app0");

DOCTEST_TEST_CASE("app0::fun returns 42")
{
    DOCTEST_CHECK_EQ(app0::fun(), 42);
}

DOCTEST_TEST_SUITE_END();
