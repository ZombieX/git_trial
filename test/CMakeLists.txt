
add_executable(main main.cpp)

target_link_libraries(
	main
	static_lib
	)


include_directories(../third_lib/iutest/include)
add_executable( hello_iutest hello_iutest.cpp)

