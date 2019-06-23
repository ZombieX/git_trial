
message("start\troot/src")

#set exectable
#add_executable(main main.cpp)


add_library(static_lib static_lib.cpp)
target_include_directories(
	static_lib
	PUBLIC ${PROJECT_SOURCE_DIR}/include
	)



message("end\troot/src")
