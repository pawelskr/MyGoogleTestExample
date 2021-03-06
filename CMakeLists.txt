cmake_minimum_required(VERSION 3.14)
#### Put your name here
set(my_lib Example)
#### Put test directory here
set(TestDir test)
project(${my_lib})

#### C/C++ compiler settings
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

#### Enabling ParamFetch
include(FetchContent)

#### ENABLING GOOGLE TESTS
enable_testing()

#### Clone and compile google test
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.10.0
)
FetchContent_GetProperties(googletest)
FetchContent_MakeAvailable(googletest)

#### ADDING FILES TO MAKEFILE
set(Headers
    ${my_lib}.hpp
)
set(Sources
    ${my_lib}.cpp
    main.cpp
)
#### Compile code to static library
add_library(${my_lib} STATIC ${Sources} ${Headers})

### 
add_subdirectory(${TestDir})

#### Put executable as output
add_executable(app ${Sources})