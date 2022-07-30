load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "calculator",
    hdrs = ["calculator.h"],
    deps = [
        "//factories:addition_factory",
        "//factories:division_factory",
        "//factories:factory",
        "//factories:minus_factory",
        "//factories:multiplication_factory",
        "//factories:subtraction_factory",
        "//interface:cc_operator_proto",
        "//operators:operator",
    ],
)
