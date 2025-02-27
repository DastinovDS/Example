add_library(Bar SHARED bar.cpp)  # Создаём динамическую библиотеку
target_include_directories(Bar PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})