// Authors: sichao@cs.wisc.edu (Sichao Yang)

#include "calculator/calculator.h"

#include <iostream>

int main(int argc, char* argv[]) {
  google::ParseCommandLineFlags(&argc, &argv, true);
  google::InitGoogleLogging(argv[0]);

  learn_bazel::Calculator<double> calculator;
  std::cout << calculator.Calculate(learn_bazel::BinaryOperatorType::kAddition, 1.0, 2.0) << std::endl;
  std::cout << calculator.Calculate(learn_bazel::BinaryOperatorType::kSubtraction, 1.0, 2.0) << std::endl;
  std::cout << calculator.Calculate(learn_bazel::BinaryOperatorType::kMultiplication, 1.0, 2.0) << std::endl;
  std::cout << calculator.Calculate(learn_bazel::BinaryOperatorType::kDivision, 1.0, 0.0) << std::endl;
  std::cout << calculator.Calculate(learn_bazel::UnaryOperatorType::kMinus, 2.0) << std::endl;

  return EXIT_SUCCESS;
}
