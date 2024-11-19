# Install script for directory: C:/Nextcloud/client-building/desktop/admin/win/msi

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/msi" TYPE FILE FILES
    "C:/Nextcloud/client-building/desktop/build/admin/win/msi/OEM.wxi"
    "C:/Nextcloud/client-building/desktop/build/admin/win/msi/collect-transform.xsl"
    "C:/Nextcloud/client-building/desktop/build/admin/win/msi/make-msi.bat"
    "C:/Nextcloud/client-building/desktop/admin/win/msi/Platform.wxi"
    "C:/Nextcloud/client-building/desktop/admin/win/msi/Nextcloud.wxs"
    "C:/Nextcloud/client-building/desktop/build/admin/win/msi/RegistryCleanup.vbs"
    "C:/Nextcloud/client-building/desktop/admin/win/msi/RegistryCleanupCustomAction.wxs"
    "C:/Nextcloud/client-building/desktop/admin/win/msi/gui/banner.bmp"
    "C:/Nextcloud/client-building/desktop/admin/win/msi/gui/dialog.bmp"
    )
endif()

