// Authors: sichao@cs.wisc.edu (Sichao Yang)

#pragma once

#include "factories/factory.h"
#include "operators/addition.h"
#include "operators/operator.h"

namespace learn_bazel {

template <typename T> class AdditionFactory : public BinaryOperatorFactory<T> {
public:
  virtual BinaryOperator<T> *Produce() const override { return new Addition<T>(); }
};

} // namespace learn_bazel
