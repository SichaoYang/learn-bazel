// Authors: sichao@cs.wisc.edu (Sichao Yang)

#pragma once

#include "factories/factory.h"
#include "operators/minus.h"
#include "operators/operator.h"

namespace learn_bazel {

template <typename T> class MinusFactory : public UnaryOperatorFactory<T> {
public:
  virtual UnaryOperator<T> *Produce() const override { return new Minus<T>(); }
};

} // namespace learn_bazel
