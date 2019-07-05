

message("start\troot/test")


add_executable(main main.cpp)

target_link_libraries(
	main
	static_lib
)




include_directories( ../third_lib/iutest/include )
add_executable( hello_iutest hello_iutest.cpp)




#add_test(hello_iutest)






include_directories( ../third_lib/boost/test/included/boost )
add_executable( hello_boost_test hello_boost_test.cpp )



#add_test(hello_boost_test)



message("end\troot/test")
