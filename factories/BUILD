load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "factory",
    hdrs = ["factory.h"],
    deps = [
        "//operators:operator",
    ],
)

cc_library(
    name = "addition_factory",
    hdrs = ["addition_factory.h"],
    deps = [
        "//operators:addition",
        "//operators:operator",
    ],
)

cc_library(
    name = "subtraction_factory",
    hdrs = ["subtraction_factory.h"],
    deps = [
        "//operators:operator",
        "//operators:subtraction",
    ],
)

cc_library(
    name = "multiplication_factory",
    hdrs = ["multiplication_factory.h"],
    deps = [
        "//operators:multiplication",
        "//operators:operator",
    ],
)

cc_library(
    name = "division_factory",
    hdrs = ["division_factory.h"],
    deps = [
        "//operators:division",
        "//operators:operator",
    ],
)

cc_library(
    name = "minus_factory",
    hdrs = ["minus_factory.h"],
    deps = [
        "//operators:minus",
        "//operators:operator",
    ],
)
