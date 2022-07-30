// Authors: sichao@cs.wisc.edu (Sichao Yang)

#pragma once

#include "operators/operator.h"

#include "glog/logging.h"

namespace learn_bazel {

template <typename T> class Division : public BinaryOperator<T> {
public:
  virtual T Calculate(const T &lhs_operand, const T &rhs_operand) const override {
    CHECK_NE(rhs_operand, 0.0) << "Divide by zero!";
    return lhs_operand / rhs_operand;
  }
};

} // namespace learn_bazel
