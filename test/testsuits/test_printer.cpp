#include "gtest/gtest.h"
#include "lib/printer/printer.hpp"

TEST(printer, pre_defined_string)
{
    printer p = printer("test");
    int ret = p.print();
    ASSERT_EQ(ret, 0);
}

TEST(printer, no_pre_defined_string)
{
    printer p = printer();
    int ret = p.print();
    ASSERT_EQ(ret, 1);
}

TEST(printer, given_string)
{
    printer p = printer();
    int ret = p.print("test");
    ASSERT_EQ(ret, 0);
}

