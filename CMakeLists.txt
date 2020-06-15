cmake_minimum_required(VERSION 3.5.0)

project(mulmat)

find_package(Eigen3 REQUIRED)

add_executable(mulmat mulmat.cpp)
target_link_libraries(mulmat Eigen3::Eigen)
