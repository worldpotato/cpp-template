/**
 * @author      : worldpotato
 * @file        : example_failure
 * @created     : Thursday Jan 14, 2021 23:13:03 CET
 */


#include "gtest/gtest.h"

TEST(example_failure, failure)
{
    ASSERT_EQ(true, false);
}

TEST(example_failure, failure2)
{
    ASSERT_EQ(true, false);
}
