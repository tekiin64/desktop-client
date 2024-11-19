# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "src\\cmd\\CMakeFiles\\cmdCore_autogen.dir\\AutogenUsed.txt"
  "src\\cmd\\CMakeFiles\\cmdCore_autogen.dir\\ParseCache.txt"
  "src\\cmd\\CMakeFiles\\nextcloudcmd_autogen.dir\\AutogenUsed.txt"
  "src\\cmd\\CMakeFiles\\nextcloudcmd_autogen.dir\\ParseCache.txt"
  "src\\cmd\\cmdCore_autogen"
  "src\\cmd\\nextcloudcmd_autogen"
  "src\\csync\\CMakeFiles\\nextcloud_csync_autogen.dir\\AutogenUsed.txt"
  "src\\csync\\CMakeFiles\\nextcloud_csync_autogen.dir\\ParseCache.txt"
  "src\\csync\\nextcloud_csync_autogen"
  "src\\gui\\CMakeFiles\\nextcloudCore_autogen.dir\\AutogenUsed.txt"
  "src\\gui\\CMakeFiles\\nextcloudCore_autogen.dir\\ParseCache.txt"
  "src\\gui\\nextcloudCore_autogen"
  "src\\libsync\\CMakeFiles\\nextcloudsync_autogen.dir\\AutogenUsed.txt"
  "src\\libsync\\CMakeFiles\\nextcloudsync_autogen.dir\\ParseCache.txt"
  "src\\libsync\\nextcloudsync_autogen"
  "src\\libsync\\vfs\\cfapi\\CMakeFiles\\nextcloudsync_vfs_cfapi_autogen.dir\\AutogenUsed.txt"
  "src\\libsync\\vfs\\cfapi\\CMakeFiles\\nextcloudsync_vfs_cfapi_autogen.dir\\ParseCache.txt"
  "src\\libsync\\vfs\\cfapi\\nextcloudsync_vfs_cfapi_autogen"
  "src\\libsync\\vfs\\cfapi\\shellext\\CMakeFiles\\CfApiShellExtensions_autogen.dir\\AutogenUsed.txt"
  "src\\libsync\\vfs\\cfapi\\shellext\\CMakeFiles\\CfApiShellExtensions_autogen.dir\\ParseCache.txt"
  "src\\libsync\\vfs\\cfapi\\shellext\\CfApiShellExtensions_autogen"
  "src\\libsync\\vfs\\suffix\\CMakeFiles\\nextcloudsync_vfs_suffix_autogen.dir\\AutogenUsed.txt"
  "src\\libsync\\vfs\\suffix\\CMakeFiles\\nextcloudsync_vfs_suffix_autogen.dir\\ParseCache.txt"
  "src\\libsync\\vfs\\suffix\\nextcloudsync_vfs_suffix_autogen"
  )
endif()
