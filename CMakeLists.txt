#CMake最低版本要求
cmake_minimum_required(VERSION 3.22)
#项目名称
project(CPlusPrimerPractice)

set(CMAKE_CXX_STANDARD 14)
#生成可执行文件，CPlusPrimerPractice 是可执行文件的名字，ch01/exercise1_1.cpp是源文件名称，如有其他源文件，可在后面添加
add_executable(CPlusPrimerPractice ch03/exercise3_1.cpp)
