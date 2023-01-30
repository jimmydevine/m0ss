find_package(GTest REQUIRED)
find_package(Threads REQUIRED)
include_directories("${PROJECT_SOURCE_DIR}/include")

add_executable(m0ss_test m0ss_test.cpp)
target_link_libraries(m0ss_test PRIVATE GTest::GTest)
target_link_libraries(m0ss_test LINK_PUBLIC "${PROJECT_BINARY_DIR}/src/libm0ss.a")
add_test(m0ss_tests m0ss_test)

