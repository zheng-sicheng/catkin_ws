# Install script for directory: /home/cdi/SynologyDrive/workspace/catkin_ws/src/kitech_legged_segway_robot_v0.2/kitech_legged_segway_robot/kitech_robots/kitech_robots_sims

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/cdi/SynologyDrive/workspace/catkin_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/cdi/SynologyDrive/workspace/catkin_ws/build/kitech_legged_segway_robot_v0.2/kitech_legged_segway_robot/kitech_robots/kitech_robots_sims/catkin_generated/installspace/kitech_robots_sims.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kitech_robots_sims/cmake" TYPE FILE FILES
    "/home/cdi/SynologyDrive/workspace/catkin_ws/build/kitech_legged_segway_robot_v0.2/kitech_legged_segway_robot/kitech_robots/kitech_robots_sims/catkin_generated/installspace/kitech_robots_simsConfig.cmake"
    "/home/cdi/SynologyDrive/workspace/catkin_ws/build/kitech_legged_segway_robot_v0.2/kitech_legged_segway_robot/kitech_robots/kitech_robots_sims/catkin_generated/installspace/kitech_robots_simsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kitech_robots_sims" TYPE FILE FILES "/home/cdi/SynologyDrive/workspace/catkin_ws/src/kitech_legged_segway_robot_v0.2/kitech_legged_segway_robot/kitech_robots/kitech_robots_sims/package.xml")
endif()

