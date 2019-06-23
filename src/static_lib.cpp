
#include<iostream>
#include"../include/static_lib.hpp"
auto static_lib::operator()()->void{
	std::cout << "static_lib::operator (not header only)\n";
}
