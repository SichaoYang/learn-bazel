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

cc_test(
    name = "calculator_test",
    srcs = ["calculator_test.cc"],
    data = [
        "//config:calculator_test",
    ],
    deps = [
        ":calculator",
        "//interface:cc_test_proto",
        "@com_google_googletest//:gtest_main",
    ]
)

