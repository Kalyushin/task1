#ifndef KVADRAT_H
#define KVADRAT_H

#include <gtest/gtest.h>

extern "C" {
#include "myfunc.h"
}

TEST(kvadratTest, root0) {
    ASSERT_EQ(kvadrat(1,1,3).count, 0);
}

TEST(kvadratTest, root1) {
    ASSERT_EQ(kvadrat(4,4,1).count, 1);
    ASSERT_EQ(kvadrat(4,4,1).x1, -0.5);
}

TEST(kvadratTest, root2) {
    ASSERT_EQ(kvadrat(1,7,3).count, 2);
    ASSERT_NEAR(kvadrat(1,7,3).x1, -0.4586, 0.001);
    ASSERT_NEAR(kvadrat(1,7,3).x2, -6.5414, 0.001);
}
TEST(kvadratTest, negative_NULL) {
    ASSERT_EQ(kvadrat(0,0,0).count, 0);
}

TEST(kvadratTest, negative_NULL_A) {
    ASSERT_EQ(kvadrat(0,2,3).count, 1);
    ASSERT_NEAR(kvadrat(0,2,3).x1, -1.5, 0.001);
}

#endif // KVADRAT_H
