#include "./test/libft.h"
#include "test.h"

void test_bzero_with_arg_yoo_3()
{

	char expected[] = {0,0,0};
	char arg1[] = "yoo";
	size_t arg2 = 3;
	
	bzero(arg1, arg2);
	int condition =  memcmp(arg1, expected, 3) == 0;

	TEST(condition, __func__);
}


void test_bzero()
{
	puts(__func__);
	test_bzero_with_arg_yoo_3();
}