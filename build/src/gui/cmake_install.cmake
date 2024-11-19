# Install script for directory: C:/Nextcloud/client-building/desktop/src/gui

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Nextcloud/client-building/desktop/build/src/gui/socketapi/cmake_install.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin/visualelements" TYPE FILE FILES
    "C:/Nextcloud/client-building/desktop/theme/colored/150-DevupsDrive-w10startmenu.png"
    "C:/Nextcloud/client-building/desktop/theme/colored/70-DevupsDrive-w10startmenu.png"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "C:/Nextcloud/client-building/desktop/theme/devupsdrive.VisualElementsManifest.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/i18n" TYPE FILE FILES
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_TW.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_af.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_ar.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_bg.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_br.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_ca.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_cs.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_da.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_de.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_el.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_en.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_en_GB.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_eo.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_es.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_es_AR.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_es_CL.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_es_CO.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_es_CR.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_es_DO.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_es_EC.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_es_GT.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_es_HN.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_es_MX.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_es_SV.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_et.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_eu.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_fa.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_fi.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_fr.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_ga.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_gl.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_he.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_hr.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_hu.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_id.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_is.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_it.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_ja.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_ko.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_lt_LT.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_lv.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_mk.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_nb_NO.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_nl.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_oc.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_pl.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_pt.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_pt_BR.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_ro.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_ru.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_sc.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_sk.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_sl.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_sr.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_sv.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_th.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_tr.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_ug.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_uk.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_zh_CN.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_zh_HK.qm"
    "C:/Nextcloud/client-building/desktop/build/src/gui/client_zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/Nextcloud/client-building/desktop/build/bin/devupsdrive.exe")
endif()

