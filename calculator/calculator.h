// Authors: sichao@cs.wisc.edu (Sichao Yang)

#pragma once

#include "factories/addition_factory.h"
#include "factories/division_factory.h"
#include "factories/factory.h"
#include "factories/minus_factory.h"
#include "factories/multiplication_factory.h"
#include "factories/subtraction_factory.h"
#include "interface/operator.pb.h"
#include "operators/operator.h"

namespace learn_bazel {

template <typename T> class Calculator {
public:
  T Calculate(const interface::UnaryOperatorType &type, const T &operand) {
    UnaryOperatorFactory<T> *factory = GetUnaryOperatorFactory(type);
    UnaryOperator<T> *unary_operator = factory->Produce();
    return unary_operator->Calculate(operand);
  }

  T Calculate(const interface::BinaryOperatorType &type, const T &lhs, const T &rhs) {
    BinaryOperatorFactory<T> *factory = GetBinaryOperatorFactory(type);
    BinaryOperator<T> *binary_operator = factory->Produce();
    return binary_operator->Calculate(lhs, rhs);
  }

private:
  UnaryOperatorFactory<T> *
  GetUnaryOperatorFactory(const interface::UnaryOperatorType &operator_type) const {
    switch (operator_type) {
    case interface::UnaryOperatorType::kMinus:
      return new MinusFactory<T>();
    }
  }

  BinaryOperatorFactory<T> *
  GetBinaryOperatorFactory(const interface::BinaryOperatorType &operator_type) const {
    switch (operator_type) {
    case interface::BinaryOperatorType::kAddition:
      return new AdditionFactory<T>();
    case interface::BinaryOperatorType::kSubtraction:
      return new SubtractionFactory<T>();
    case interface::BinaryOperatorType::kMultiplication:
      return new MultiplicationFactory<T>();
    case interface::BinaryOperatorType::kDivision:
      return new DivisionFactory<T>();
    }
  }
};

} // namespace learn_bazel
