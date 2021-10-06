######################################################################
# @author      : worldpotato
# @file        : CMakeLists
# @created     : Thursday Jan 14, 2021 19:24:36 CET
######################################################################
find_package(Threads REQUIRED)

set(CMAKE_CXX_FLAGS --coverage)

enable_testing()

add_executable(${PROJECT_NAME}_tests
    mainTest.cpp
    ../printer.cpp
    ./testsuits/test_printer.cpp
)

target_link_libraries(${PROJECT_NAME}_tests
    gtest
    gmock
    pthread
)

target_include_directories(${PROJECT_NAME}_tests PRIVATE
                          "../"
                          )

add_test(
    NAME ${PROJECT_NAME}_tests
    COMMAND ${PROJECT_NAME}_tests
)

# run tests after build but also deletes test executable when it fails
# add_custom_command(TARGET ${PROJECT_NAME}_tests
#     POST_BUILD
#     COMMAND ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${PROJECT_NAME}_tests
#     )
