# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\RUDumb_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\RUDumb_autogen.dir\\ParseCache.txt"
  "RUDumb_autogen"
  )
endif()
