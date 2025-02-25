cmake_minimum_required(VERSION 3.10)
project(Statistics)

# Устанавливаем стандарт C++17
set(CMAKE_CXX_STANDARD 17)

# Создаем исполняемый файл
add_executable(statistics
    main.cpp
    min.cpp
    max.cpp
    mean.cpp
    stddev.cpp
    percentile90.cpp
    percentile95.cpp
)

# Добавляем каталог с заголовочными файлами
include_directories(${PROJECT_SOURCE_DIR})