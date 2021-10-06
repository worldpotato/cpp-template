cmake_minimum_required (VERSION 3.18)

# replace test with your projects name:
# :%s/test/name/g

# replace <subLib> with the name of libraries
# :%s/<subLib>/name/g

project(printer)

find_package(GTest REQUIRED)

# compile flags
add_compile_options(-Wall -Wextra -pedantic)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS --coverage)
set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

# set(source_dir "${PROJECT_SOURCE_DIR}/src/")

file(GLOB source_files
  "${PROJECT_NAME}.cpp"
    )

add_subdirectory(test)
add_library(${PROJECT_NAME} ${source_files})
# target_include_directories(${PROJECT_NAME} PRIVATE "${source_dir}/include")

enable_testing()

# move compile_commands to root of the project
# that should be done for ccls
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy_if_different
                        ${CMAKE_BINARY_DIR}/compile_commands.json
                        ${PROJECT_SOURCE_DIR}/compile_commands.json
                   )

