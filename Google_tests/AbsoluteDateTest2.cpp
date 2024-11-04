#include "gtest/gtest.h"
#include <stdlib.h>
//#include "../DateConverter_lib/testc.c"
#include "../ch02/e02-30.c"
#include "../ch02/e02-27.c"


TEST(AbsoluteDateTestSuite2, e02_30_tadd_ok_test) {
    int a, b;
    //负数相加为0
    a = -2147483648;
    b = -2147483648;
    EXPECT_EQ(tadd_ok(a,b), -1);

    //负数相加为正
    a = -2147483648;
    b = -1;
    EXPECT_EQ(tadd_ok(a,b), -1);

    //正数相加为负
    a = 2147483647;
    b = 1;
    EXPECT_EQ(tadd_ok(a,b), 1);
}

TEST(AbsoluteDateTestSuite2, e02_27_uadd_ok_test) {
    unsigned a, b;
    //负数相加为0
    a = 4294967295;
    b = 1;
    EXPECT_EQ(uadd_ok(a,b), 0);

    //负数相加为正
    a = 1;
    b = 2;
    EXPECT_EQ(uadd_ok(a,b), 1);
}
