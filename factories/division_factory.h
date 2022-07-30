// Authors: sichao@cs.wisc.edu (Sichao Yang)

#pragma once

#include "factories/factory.h"
#include "operators/division.h"
#include "operators/operator.h"

namespace learn_bazel {

template <typename T> class DivisionFactory : public BinaryOperatorFactory<T> {
public:
  virtual BinaryOperator<T> *Produce() const override { return new Division<T>(); }
};

} // namespace learn_bazel
