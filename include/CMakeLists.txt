
#for header only lib
add_library(header_only_lib INTERFACE)


#for static lib
add_library(static_lib STATIC ../src/static_lib.cpp)

target_sources(
	mylib
	PRIVATE
	${CMAKE_CURRENT_SOURCE_DIR}/static_lib.hpp
	)


