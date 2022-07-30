load("@rules_cc//cc:defs.bzl", "cc_proto_library")
load("@rules_proto//proto:defs.bzl", "proto_library")

package(default_visibility = ["//visibility:public"])

proto_library(
    name = "operator_proto",
    srcs = ["operator.proto"],
    deps = [],
)

cc_proto_library(
    name = "cc_operator_proto",
    deps = [":operator_proto"],
)

proto_library(
    name = "test_proto",
    srcs = ["test.proto"],
    deps = [":operator_proto"],
)

cc_proto_library(
    name = "cc_test_proto",
    deps = [":test_proto"],
)
