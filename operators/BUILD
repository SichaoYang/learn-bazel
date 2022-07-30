load("@rules_cc//cc:defs.bzl", "cc_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "operator",
    hdrs = ["operator.h"],
)

cc_library(
    name = "addition",
    hdrs = ["addition.h"],
    deps = [
        ":operator",
    ],
)

cc_library(
    name = "subtraction",
    hdrs = ["subtraction.h"],
    deps = [
        ":operator",
    ],
)

cc_library(
    name = "multiplication",
    hdrs = ["multiplication.h"],
    deps = [
        ":operator",
    ],
)

cc_library(
    name = "division",
    hdrs = ["division.h"],
    deps = [
        ":operator",
        "@com_github_google_glog//:glog",
    ],
)

cc_library(
    name = "minus",
    hdrs = ["minus.h"],
    deps = [
        ":operator",
    ],
)

cc_test(
    name = "division_test",
    srcs = ["division_test.cc"],
    deps = [
        ":division",
        "@com_google_googletest//:gtest_main",
    ]
)
