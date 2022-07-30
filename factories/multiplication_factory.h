// Authors: sichao@cs.wisc.edu (Sichao Yang)

#pragma once

#include "factories/factory.h"
#include "operators/multiplication.h"
#include "operators/operator.h"

namespace learn_bazel {

template <typename T> class MultiplicationFactory : public BinaryOperatorFactory<T> {
public:
  virtual BinaryOperator<T> *Produce() const override { return new Multiplication<T>(); }
};

} // namespace learn_bazel
