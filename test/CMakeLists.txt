enable_testing()
find_package(GTest)

add_executable(DummyTest
                dummy.cpp
                )

target_link_libraries(DummyTest
                        PUBLIC
                        jabjson
                        pthread
                        gtest
                        gtest_main
                        )

add_test(DummyTest DummyTest)
