cmake_minimum_required(VERSION 3.6.2)

set(TARGET_NAME lab01)
set(CMAKE_CXX_STANDARD 20)
project(${TARGET_NAME})

set(SOURCE_FILES
        getText.cpp
        isDecimalNumber.cpp
        numberOfOccurrences.cpp
)

set(TEST_FILES
        testyUloha_1.cpp
        testyUloha_2.cpp
        testyUloha_3.cpp
        testyUloha_4.cpp
        testyUloha_5.cpp
)

set(GTEST_SOURCE_FILES
        GoogleTest/gtest-death-test.cc
        GoogleTest/gtest-filepath.cc
        GoogleTest/gtest-port.cc
        GoogleTest/gtest-printers.cc
        GoogleTest/gtest-test-part.cc
        GoogleTest/gtest-typed-test.cc
        GoogleTest/gtest.cc
        GoogleTest/gtest_main.cc)

find_package(Threads)

include_directories(GoogleTest)
add_executable(${TARGET_NAME} ${SOURCE_FILES} ${TEST_FILES} ${GTEST_SOURCE_FILES})
target_link_libraries(${TARGET_NAME} ${CMAKE_LIBS_INIT} ${CMAKE_THREAD_LIBS_INIT})
