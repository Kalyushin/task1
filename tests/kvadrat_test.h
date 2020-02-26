#ifndef KVADRAT_H
#define KVADRAT_H

#include <gtest/gtest.h>

extern "C" {
#include "myfunc.h"
}

TEST(kvadratTest, root0) {
    ASSERT_EQ(kvadrat(1,1,3).count, 0);
    ASSERT_EQ(kvadrat(4,1,3).count, 0);
}

TEST(kvadratTest, root1) {
    ASSERT_EQ(kvadrat(1,2,1).count, 1);
    ASSERT_EQ(kvadrat(1,2,1).x1, -1.0);

    ASSERT_EQ(kvadrat(4,4,1).count, 1);
    ASSERT_EQ(kvadrat(4,4,1).x1, -0.5);
}

TEST(kvadratTest, root2) {
    ASSERT_EQ(kvadrat(3,6,1).count, 2);
    ASSERT_NEAR(kvadrat(3,6,1).x1, -0.1835, 0.001);
    ASSERT_NEAR(kvadrat(3,6,1).x2, -1.8164, 0.001);

    ASSERT_EQ(kvadrat(1,7,3).count, 2);
    ASSERT_NEAR(kvadrat(1,7,3).x1, -0.4586, 0.001);
    ASSERT_NEAR(kvadrat(1,7,3).x2, -6.5414, 0.001);

}

#endif // KVADRAT_H
