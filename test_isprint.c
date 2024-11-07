#include "./test/libft.h"
#include "test.h"

void test_isprint_with_arg_3()
{

	int expected = 0;
	char arg = '3';
	int result = ft_isprint(arg);
	int condition = expected != result;

	TEST(condition, __func__);
}

void test_isprint_with_arg_nul()
{

	int expected = 0;
	char arg = '\0';
	int result = ft_isprint(arg);
	int condition = expected == result;

	TEST(condition, __func__);
}


void test_isprint()
{
	puts(__func__);
	test_isprint_with_arg_3();
	test_isprint_with_arg_nul();
}