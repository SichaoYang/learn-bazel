// Authors: sichao@cs.wisc.edu (Sichao Yang)

#pragma once

#include "operators/operator.h"

namespace learn_bazel {

template <typename T> class OperatorFactory {
public:
  virtual Operator<T> *Produce() const = 0;
};

template <typename T> class UnaryOperatorFactory : public OperatorFactory<T> {
public:
  virtual UnaryOperator<T> *Produce() const = 0;
};

template <typename T> class BinaryOperatorFactory : public OperatorFactory<T> {
public:
  virtual BinaryOperator<T> *Produce() const = 0;
};

} // namespace learn_bazel
