// Authors: sichao@cs.wisc.edu (Sichao Yang)

#include <iostream>

#include "calculator/calculator.h"
#include "interface/operator.pb.h"

int main(int argc, char* argv[]) {
  google::ParseCommandLineFlags(&argc, &argv, true);
  google::InitGoogleLogging(argv[0]);

  learn_bazel::Calculator<double> calculator;
  std::cout << calculator.Calculate(interface::BinaryOperatorType::kAddition, 1.0, 2.0) << std::endl;
  std::cout << calculator.Calculate(interface::BinaryOperatorType::kSubtraction, 1.0, 2.0) << std::endl;
  std::cout << calculator.Calculate(interface::BinaryOperatorType::kMultiplication, 1.0, 2.0) << std::endl;
  std::cout << calculator.Calculate(interface::BinaryOperatorType::kDivision, 1.0, 0.0) << std::endl;
  std::cout << calculator.Calculate(interface::UnaryOperatorType::kMinus, 2.0) << std::endl;

  return EXIT_SUCCESS;
}
