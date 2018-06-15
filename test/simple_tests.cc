#include <slowmath/slowmath.h>
#include <gtest/gtest.h>
#include <cmath>

#define CLOSE_ENOUGH(x, y) EXPECT_NEAR(x, y, 1e-7f)

const double PI = atan(1.f) * 4.f;

TEST(SinTests, SimpleTests) {
  CLOSE_ENOUGH(slowmath::sin(0.f), sin(0.f));
  CLOSE_ENOUGH(slowmath::sin(1.f), sin(1.f));
  CLOSE_ENOUGH(slowmath::sin(PI/2.f), sin(PI/2.f));
}

TEST(DegreesRadiansTests, SimpleTests) {
  CLOSE_ENOUGH(slowmath::degrees(PI), 180.f);
  CLOSE_ENOUGH(slowmath::degrees(PI * 4), 720.f);
  CLOSE_ENOUGH(slowmath::degrees(0), 0);

  CLOSE_ENOUGH(slowmath::radians(360.f), PI * 2);
  CLOSE_ENOUGH(slowmath::radians(90.f), PI / 2);
  CLOSE_ENOUGH(slowmath::radians(0), 0);
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

