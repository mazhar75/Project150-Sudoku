# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles/cse150_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/cse150_autogen.dir/ParseCache.txt"
  "cse150_autogen"
  )
endif()
