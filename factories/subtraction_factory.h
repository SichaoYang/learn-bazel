// Authors: sichao@cs.wisc.edu (Sichao Yang)

#pragma once

#include "factories/factory.h"
#include "operators/operator.h"
#include "operators/subtraction.h"

namespace learn_bazel {

template <typename T> class SubtractionFactory : public BinaryOperatorFactory<T> {
public:
  virtual BinaryOperator<T> *Produce() const override { return new Subtraction<T>(); }
};

} // namespace learn_bazel
