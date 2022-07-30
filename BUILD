load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [
        "//calculator:calculator",
        "//interface:cc_operator_proto",
        "//operators:operator",
    ],
)
