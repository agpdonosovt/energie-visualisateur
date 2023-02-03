cmake_minimum_required(VERSION 3.5)
project(Exercise-11 CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_package(Qt5Widgets REQUIRED)

set(gui_src
  complex_widget.hpp  complex_widget.cpp
  canvas_widget.hpp   canvas_widget.cpp
  left_widget.hpp     left_widget.cpp
  tabs_widget.hpp     tabs_widget.cpp
  top_widget.hpp      top_widget.cpp
  )
  
set(main_src
  ${gui_src}
  main.cpp
)

add_executable(main ${main_src})
set(TARGET main PROPERTY CXX_STANDARD 14)
target_link_libraries(main Qt5::Widgets)
