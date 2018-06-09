#include <slowmath/slowmath.h>
#include <gtest/gtest.h>

TEST(MyTests, SomeTest) {
  ASSERT_EQ("something", "something_else");
}

int main(int argc, char *argv[]) {
  slowmath::hello();
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

