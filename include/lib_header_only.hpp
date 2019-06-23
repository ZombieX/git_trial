
#include<iostream>

class lib_header_only{
	public:
		auto operator()()->void{
			std::cout <<"lib header only\n";
		}
};
