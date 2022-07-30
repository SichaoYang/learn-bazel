// Authors: sichao@cs.wisc.edu (Sichao Yang)

#pragma once

#include "operators/operator.h"

namespace learn_bazel {

template <typename T> class Minus : public UnaryOperator<T> {
public:
  virtual T Calculate(const T &operand) const override { return -operand; }
};

} // namespace learn_bazel
