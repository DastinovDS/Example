add_library(Foo STATIC foo.cpp)  # Создаём статическую библиотеку
target_include_directories(Foo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})