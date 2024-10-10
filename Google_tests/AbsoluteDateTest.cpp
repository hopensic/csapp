#include "gtest/gtest.h"
#include <stdlib.h>


TEST(AbsoluteDateTestSuite, ExampleDate) {
    // 12/2/2020 -> 737761
    //    GregorianDate gregDate;
    //    gregDate.SetMonth(12);
    //    gregDate.SetDay(2);
    //    gregDate.SetYear(2020);
    unsigned int x = rand(), y = rand();
    unsigned int ra = (x | y) ^ y;
    unsigned int rb = x & ~y;
    EXPECT_EQ(ra, rb);

    x = rand(), y = rand();
    ra = (x | y) ^ y;
    rb = x & ~y;
    EXPECT_EQ(ra, rb);

    x = rand(), y = rand();
    ra = (x | y) ^ y;
    rb = x & ~y;
    EXPECT_EQ(ra, rb);

    x = rand(), y = rand();
    ra = (x | y) ^ y;
    rb = x & ~y;
    EXPECT_EQ(ra, rb);

    x = rand(), y = rand();
    ra = (x | y) ^ y;
    rb = x & ~y;
    EXPECT_EQ(ra, rb);
}
