
//#define BOOST_TEST_MAIN


//define a test module.
#define BOOST_TEST_MODULE MyTest

//#include"./boost/test/unit_test.hpp"

#include<boost/test/included/unit_test.hpp>

//define test suite and register to the test module.
//BOOST_AUTO_TEST_SUITE(hello_test_suite);


//define test case and add to test suite
BOOST_AUTO_TEST_CASE(hello_test){
	
	BOOST_TEST(true);

}


//BOOST_AUTO_TEST_SUITE_END();
