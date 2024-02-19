cmake_minimum_required(VERSION 3.10)  # CMake 최소 버전 지정
project(HelloWorld VERSION 1.0)       # 프로젝트 이름과 버전 지정

set(CMAKE_CXX_STANDARD 11)            # C++ 표준 버전 지정
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(Boost 1.65 REQUIRED COMPONENTS filesystem system)
if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_executable(HelloWorld src/main.cpp)  # 실행 파일과 소스 파일 지정
    target_link_libraries(HelloWorld ${Boost_LIBRARIES})
endif()

# find_package(OpenCV REQUIRED)
# if(OpenCV_FOUND)
#     include_directories(${OpenCV_INCLUDE_DIRS})
#     add_executable(HelloWorld src/main.cpp)  # 실행 파일과 소스 파일 지정
#     target_link_libraries(HelloWorld ${OpenCV_LIBS})
# endif()