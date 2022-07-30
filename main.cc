// Authors: sichao@cs.wisc.edu (Sichao Yang)

#include <iostream>

#include "calculator/calculator.h"
#include "interface/operator.pb.h"

#include "gflags/gflags.h"

DEFINE_string(operator_type, "", "Operator type.");
DEFINE_double(operand, 0.0, "First operand.");
DEFINE_double(rhs_operand, 0.0, "Second operand for binary operation.");

int main(int argc, char *argv[]) {
  google::ParseCommandLineFlags(&argc, &argv, true);
  google::InitGoogleLogging(argv[0]);

  learn_bazel::Calculator<double> calculator;
  if (FLAGS_operator_type == "Minus") {
    std::cout << calculator.Calculate(interface::UnaryOperatorType::kMinus,
                                      FLAGS_operand)
              << std::endl;
  } else if (FLAGS_operator_type == "Addition") {
    std::cout << calculator.Calculate(interface::BinaryOperatorType::kAddition,
                                      FLAGS_operand, FLAGS_rhs_operand)
              << std::endl;
  } else if (FLAGS_operator_type == "Subtraction") {
    std::cout << calculator.Calculate(
                     interface::BinaryOperatorType::kSubtraction, FLAGS_operand,
                     FLAGS_rhs_operand)
              << std::endl;
  } else if (FLAGS_operator_type == "Multiplication") {
    std::cout << calculator.Calculate(
                     interface::BinaryOperatorType::kMultiplication,
                     FLAGS_operand, FLAGS_rhs_operand)
              << std::endl;
  } else if (FLAGS_operator_type == "Division") {
    std::cout << calculator.Calculate(interface::BinaryOperatorType::kDivision,
                                      FLAGS_operand, FLAGS_rhs_operand)
              << std::endl;
  } else {
    LOG(FATAL) << "Unsupported operator";
  }

  return EXIT_SUCCESS;
}
