
message("start\troot/src")


#add_library(static_lib static_lib.cpp)
target_sources(
	mylib
	PRIVATE 
	#${CMAKE_CURRENT_SOURCE_DIR}/
	static_lib.cpp
	)


message("end\troot/src")
