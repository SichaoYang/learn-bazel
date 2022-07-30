// Authors: sichao@cs.wisc.edu (Sichao Yang)

#include "calculator/calculator.h"

#include <fstream>
#include <sstream>

#include "interface/test.pb.h"

#include "google/protobuf/text_format.h"
#include "gtest/gtest.h"

namespace learn_bazel {

namespace {

constexpr double kEpsilon = 1e-7;

} // namespace

class CalculatorTest : public ::testing::Test {
protected:
  Calculator<double> calculator_;
};

TEST_F(CalculatorTest, File) {
  std::ifstream fin;
  fin.open("config/calculator_test.config");
  std::stringstream ss;
  ss << fin.rdbuf();
  interface::CalculatorTestSet test_set;
  ::google::protobuf::TextFormat::Parser parser;
  parser.ParseFromString(ss.str(), &test_set);

  for (const interface::UnaryOperatorTestCase &test_case :
       test_set.unary_operator_test_case()) {
    EXPECT_NEAR(
        calculator_.Calculate(test_case.operator_type(), test_case.operand()),
        test_case.value(), kEpsilon);
  }

  for (const interface::BinaryOperatorTestCase &test_case :
       test_set.binary_operator_test_case()) {
    EXPECT_NEAR(calculator_.Calculate(test_case.operator_type(),
                                      test_case.lhs_operand(),
                                      test_case.rhs_operand()),
                test_case.value(), kEpsilon);
  }
}

} // namespace learn_bazel
