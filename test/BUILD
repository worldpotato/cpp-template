load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_test (
    name = "test-printer",
    srcs = [
        "mainTest.cpp",
        "testsuits/test_printer.cpp"
    ],
    deps = [
        "@gtest//:gtest",
        "//lib/printer:printer"
        # "@gtest//:gtest_main" # Only if hello_test.cc has no main()
    ],
)

