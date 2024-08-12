PROJECT(camera_handler)
#  VERSION 1.0.0 DESCRIPTION "webcam_ip PACIDAL interface")

cmake_minimum_required(VERSION 2.8)

if(WIN32)
    set(OpenCV_DIR c:/opencv-4.4.0/build)
else()
endif()

find_package( OpenCV REQUIRED )

# set( NAME_SRC src/camera_handler.cpp)
include_directories( ${OpenCV_INCLUDE_DIRS})
add_executable(camera_handler src/camera_handler.cpp)
target_link_libraries(camera_handler ${OpenCV_LIBS})