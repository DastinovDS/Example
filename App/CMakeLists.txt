add_executable(App main.cpp)

# Подключаем Foo (статическая) и Bar (динамическая)
target_link_libraries(App PRIVATE Foo Bar)

# Добавляем пути для заголовочных файлов
target_include_directories(App PRIVATE 
    ${CMAKE_SOURCE_DIR}/Foo 
    ${CMAKE_SOURCE_DIR}/Bar
)

add_custom_command(TARGET App POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_FILE:Bar>  # Путь к Bar.dll
        $<TARGET_FILE_DIR:App>  # Папка с исполняемым файлом App
)