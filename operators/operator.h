// Authors: sichao@cs.wisc.edu (Sichao Yang)

#pragma once

#include <iostream>

namespace learn_bazel {

template <typename T> class Operator {};

template <typename T> class UnaryOperator : public Operator<T> {
public:
  UnaryOperator() = default;
  virtual ~UnaryOperator() = default;

  virtual T Calculate(const T &operand) const = 0;
};

template <typename T> class BinaryOperator : public Operator<T> {
public:
  BinaryOperator() = default;
  virtual ~BinaryOperator() = default;

  virtual T Calculate(const T &lhs_operand, const T &rhs_operand) const = 0;
};

} // namespace learn_bazel
