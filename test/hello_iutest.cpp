#include "./iutest.hpp"


//entry point
//http://srz-zumix.github.io/iutest/
int main(int argc, char** argv){
	IUTEST_INIT( &argc, argv );
	return IUTEST_RUN_ALL_TESTS();
}

IUTEST( HelloWorld, ExpectTrue ){
	IUTEST_EXPECT_TRUE(true);
//	IUTEST_SUCCEED() << "OK!!";
}
