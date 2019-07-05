
message("start\troot/src")


add_library(static_lib static_lib.cpp)

target_sources(
	mylib
	PRIVATE	static_lib.cpp
	)


message("end\troot/src")
