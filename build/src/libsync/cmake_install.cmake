# Install script for directory: C:/Nextcloud/client-building/desktop/src/libsync

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Nextcloud/client-building/install/Release/Win64")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/nextcloudsync/mirall" TYPE FILE FILES
    "C:/Nextcloud/client-building/desktop/src/libsync/account.h"
    "C:/Nextcloud/client-building/desktop/src/libsync/syncengine.h"
    "C:/Nextcloud/client-building/desktop/src/libsync/configfile.h"
    "C:/Nextcloud/client-building/desktop/src/libsync/networkjobs.h"
    "C:/Nextcloud/client-building/desktop/src/libsync/progressdispatcher.h"
    "C:/Nextcloud/client-building/desktop/src/libsync/syncfileitem.h"
    "C:/Nextcloud/client-building/desktop/src/libsync/syncresult.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/nextcloudsync/creds" TYPE FILE FILES
    "C:/Nextcloud/client-building/desktop/src/libsync/creds/abstractcredentials.h"
    "C:/Nextcloud/client-building/desktop/src/libsync/creds/httpcredentials.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/Nextcloud/client-building/desktop/build/src/libsync/devupsdrivesync.lib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "C:/Nextcloud/client-building/desktop/build/bin/devupsdrivesync.dll")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Nextcloud/client-building/desktop/build/src/libsync/vfs/cmake_install.cmake")
endif()

