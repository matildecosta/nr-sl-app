# Install script for directory: /home/matilde/nr-sl-app/openairinterface5g/openair2

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
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

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/E1AP/cmake_install.cmake")
  include("/home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/F1AP/cmake_install.cmake")
  include("/home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/M2AP/cmake_install.cmake")
  include("/home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/X2AP/cmake_install.cmake")
  include("/home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/RRC/cmake_install.cmake")
  include("/home/matilde/nr-sl-app/openairinterface5g/cmake_targets/ran_build/build/openair2/XNAP/cmake_install.cmake")

endif()
