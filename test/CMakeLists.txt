add_executable(Sample1.test Sample1.cpp)
add_test(
    NAME TestSample1
    COMMAND oj t -c ${CMAKE_CURRENT_BINARY_DIR}/Sample1.test -d ${CMAKE_CURRENT_SOURCE_DIR}/Sample1)
add_custom_target(Sample1
    COMMAND oj t -c ${CMAKE_CURRENT_BINARY_DIR}/Sample1.test -d ${CMAKE_CURRENT_SOURCE_DIR}/Sample1)

add_executable(Sample2.test Sample2.cpp)
add_test(
    NAME TestSample2
    COMMAND oj t -c ${CMAKE_CURRENT_BINARY_DIR}/Sample2.test -d ${CMAKE_CURRENT_SOURCE_DIR}/Sample2)
add_custom_target(Sample2
    COMMAND oj t -c ${CMAKE_CURRENT_BINARY_DIR}/Sample2.test -d ${CMAKE_CURRENT_SOURCE_DIR}/Sample2)
