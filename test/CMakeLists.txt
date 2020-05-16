cmake_minimum_required(VERSION 3.0)
#### Put your test file here
set(This ExampleTests)

#### Test file!
set(Sources
    ${This}.cpp
)

#### Put executable as output
add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    gtest_main  # Linking GoogleTest
    Example     # This is an output from root's CMakeLists.txt
)

##### Executing test here
add_test(
    NAME ${This}
    COMMAND ${This}
)