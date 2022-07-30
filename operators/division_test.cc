// Authors: sichao@cs.wisc.edu (Sichao Yang)

#include "operators/division.h"

#include <cstdlib>
#include <ctime>

#include "gtest/gtest.h"

namespace learn_bazel {

namespace {

constexpr double kEpsilon = 1e-7;

double RandomDouble(double min, double max) {
  double random_double = static_cast<double>(rand()) / RAND_MAX;
  return min + random_double * (max - min);
}

} // namespace

class DivisionTest : public ::testing::Test {
public:
  void SetUp() override { division_ = Division<double>(); }

protected:
  Division<double> division_;
};

TEST_F(DivisionTest, Preset) {
  EXPECT_NEAR(division_.Calculate(1.0, 2.0), 0.5, kEpsilon);
}

TEST_F(DivisionTest, Random) {
  srand(time(nullptr));
  const double lhs = RandomDouble(-1.0, +1.0);
  const double rhs = RandomDouble(kEpsilon, +1.0);
  EXPECT_NEAR(division_.Calculate(lhs, rhs), lhs / rhs, kEpsilon);
}

TEST_F(DivisionTest, DivideByZero) {
  EXPECT_DEATH(division_.Calculate(1.0, 0.0), "Divide");
}

} // namespace learn_bazel
