#include "./test/libft.h"
#include "test.h"
//
void test_isascii_with_arg_128()
{

	int expected = 0;
	int arg = 128;
	int result = ft_isascii(arg);
	int condition = expected == result;

	TEST(condition, __func__);
}
void test_isascii_with_arg_0()
{

	int expected = 1;
	int arg = 0;
	int result = ft_isascii(arg);
	int condition = expected == result;

	TEST(condition, __func__);
}


void test_isascii()
{
	puts(__func__);
	test_isascii_with_arg_128();
	test_isascii_with_arg_0();
}