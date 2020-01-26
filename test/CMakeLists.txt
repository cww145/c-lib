# src/Sample.hpp のテスト(test/Sample.cpp)用の設定
add_executable(Sample.test Sample.cpp)
add_test(
    NAME TestSample
    COMMAND oj t -c ${CMAKE_CURRENT_BINARY_DIR}/Sample.test -d ${CMAKE_CURRENT_SOURCE_DIR}/Sample)
add_custom_target(Sample
    COMMAND oj t -c ${CMAKE_CURRENT_BINARY_DIR}/Sample.test -d ${CMAKE_CURRENT_SOURCE_DIR}/Sample)

# src/Eratosthenes.hpp のテスト(test/Eratosthenes.cpp)用の設定

add_executable(Eratosthenes.test Eratosthenes.cpp)
add_test(
    NAME TestEratosthenes
    COMMAND oj t -c ${CMAKE_CURRENT_BINARY_DIR}/Eratosthenes.test -d ${CMAKE_CURRENT_SOURCE_DIR}/Eratosthenes)
add_custom_target(Eratosthenes
    COMMAND oj t -c ${CMAKE_CURRENT_BINARY_DIR}/Eratosthenes.test -d ${CMAKE_CURRENT_SOURCE_DIR}/Eratosthenes)