cmake_minimum_required (VERSION 3.0)
project (m0ss VERSION 0.0.1)

set (CMAKE_CXX_STANDARD 17)

install(
    DIRECTORY ${PROJECT_SOURCE_DIR}/include 
    DESTINATION include
	FILES_MATCHING PATTERN "*"
)

add_subdirectory(src)

enable_testing()
add_subdirectory(tests)

#SET(CPACK_GENERATOR "DEB")
#SET(CPACK_PACKAGE_NAME "libjimmy-cpp-types-dev")
#set(CPACK_DEBIAN_PACKAGE_ARCHITECTURE "all")
#SET(CPACK_SYSTEM_NAME "all")
#SET(CPACK_DEBIAN_PACKAGE_MAINTAINER "Jimmy Devine")
#INCLUDE(CPack)

