#include "./test/libft.h"
#include "test.h"
//
void test_isdigit_with_arg_1()
{

	int expected = 1;
	char arg = '3';
	int result = ft_isdigit(arg);

	TEST(expected == result, __func__);
}


void test_isdigit()
{
	puts(__func__);
	test_isdigit_with_arg_1();
}