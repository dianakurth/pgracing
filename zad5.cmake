cmake_minimum_required(VERSION 3.0)
project(MyProject)

include_directories(/usr/include/openssl)

find_package(OpenSSL REQUIRED)
if(OPENSSL_FOUND)
    include_directories(${OPENSSL_INCLUDE_DIR})
    link_libraries(${OPENSSL_LIBRARIES})
endif()

add_executable(my_executable main.cpp)
