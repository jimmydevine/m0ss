

include_directories("${PROJECT_SOURCE_DIR}/include")

add_library("m0ss-lib" STATIC m0ss.cpp)
set_target_properties("m0ss-lib" PROPERTIES OUTPUT_NAME "m0ss")
install(FILES "${PROJECT_BINARY_DIR}/src/libm0ss.a" DESTINATION "lib")

