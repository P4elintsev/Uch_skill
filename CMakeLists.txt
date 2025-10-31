cmake_minimum_required(VERSION 3.18)        # требуемая версия cmake
project(    
    Cars                                    # название проекта                        
    VERSION 0.0.0                           # номер версии проекта
    DESCRIPTION "Cars class"                # описание           
    LANGUAGES CXX                           # язык программирования
)   
set(CMAKE_CXX_STANDARD 17)                  # устанавливаем требуемый стандарт языка (это значит, что в проекте буду использоваться фичи этоо стандарта)
set(CMAKE_CXX_STANDARD_REQUIRED ON)         # при сборке платформа будет проверять поддержку стандарта C++17 компилятором

set(CMAKE_BUILD_TYPE Debug)                 # конфигурация сборки - Debug

add_executable(cars_class)                    # эта команда сообщает платформе сборке, что код будет компилироваться в исполняемый файл с названием Cars.exe
# add_library(lesson3)                        # эта команда сообщает платформе сборке, что код будет компилироваться в статическую библиотеку с названием lesson3.lib
# add_library(lesson3 SHARED)                 # эта команда сообщает платформе сборке, что код будет компилироваться в динамическую библиотеку с названием lesson3.dll


set(sources                                 # создаем cmake-переменную sources, которая содержит список файлов исходного когда (в данном случае main.cpp)
    src/main.cpp
    src/car.h
    src/car.cpp
    src/lorry.h
    src/lorry.cpp
)

target_sources(cars_class PRIVATE ${sources})  # команда указывает компилятору, что исполняемый файл будет компилироваться из исходников, перечисленных в sources

target_include_directories(cars_class
    PUBLIC
        "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>"
        "$<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>"
)
