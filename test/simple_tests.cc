#include <slowmath/slowmath.h>
#include <gtest/gtest.h>
#include <cmath>

#define PRECISION 1e-7

TEST(SinTests, SimpleTests) {
  ASSERT_TRUE(abs(slowmath::sin(0.0) - sin(0.0)) <= PRECISION);
  ASSERT_TRUE(abs(slowmath::sin(1.0) - sin(1.0)) <= PRECISION);

  const double PI = atan(1) * 4;
  ASSERT_TRUE(abs(slowmath::sin(PI/2) - sin(PI/2)) <= PRECISION);
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

