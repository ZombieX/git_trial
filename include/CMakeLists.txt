
message("start\troot/include")

#for header only lib
add_library(header_only_lib INTERFACE)



target_sources(
	mylib
	PRIVATE	static_lib.hpp
	)

message("end\troot/include")

