
#include<iostream>
#include"../include/lib_header_only.hpp"
#include"../include/static_lib.hpp"


int main(){
	std::cout << "hello world at main.cpp\n";
	lib_header_only{}();
	static_lib{}();
	
	return 0;
}
