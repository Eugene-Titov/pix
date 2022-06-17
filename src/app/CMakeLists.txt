


project(app)
add_executable(app main.cpp widget.cpp paper.cpp)
target_link_libraries(app Qt5::Widgets)
target_link_libraries(app Qt5::Core)