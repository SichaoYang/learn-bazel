// Authors: sichao@cs.wisc.edu (Sichao Yang)

#pragma once

#include "operators/operator.h"

namespace learn_bazel {

template <typename T> class Addition : public BinaryOperator<T> {
public:
  virtual T Calculate(const T &lhs_operand, const T &rhs_operand) const override {
    return lhs_operand + rhs_operand;
  }
};

} // namespace learn_bazel
