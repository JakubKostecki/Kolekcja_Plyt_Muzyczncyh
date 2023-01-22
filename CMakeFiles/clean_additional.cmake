# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\KolekcjaPlytMuzycznych_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\KolekcjaPlytMuzycznych_autogen.dir\\ParseCache.txt"
  "KolekcjaPlytMuzycznych_autogen"
  )
endif()
