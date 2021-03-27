# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "source/CMakeFiles/Chariotte_autogen.dir/AutogenUsed.txt"
  "source/CMakeFiles/Chariotte_autogen.dir/ParseCache.txt"
  "source/Chariotte_autogen"
  "source/utilities/CMakeFiles/chariotte_utils_autogen.dir/AutogenUsed.txt"
  "source/utilities/CMakeFiles/chariotte_utils_autogen.dir/ParseCache.txt"
  "source/utilities/chariotte_utils_autogen"
  )
endif()
