#include "./test/libft.h"
#include "test.h"

void test_memset_with_arg_hello_0_6()
{

	char	expected[6] = {0};
	char	arg1[] = "hello";
	int		arg2 = 0;
	size_t	arg3 = 6;

	ft_memset(arg1, arg2, arg3);
	int condition = 0 == memcmp(expected, arg1, 6);
	TEST(condition, __func__);
}

void test_memset_with_arg_hello_h_6()
{

	char	expected[] = "hhhhhh";
	char	arg1[] = "hello";
	char	arg2 = 'h';
	size_t	arg3 = 6;

	ft_memset(arg1, arg2, arg3);
	int condition = 0 == memcmp(expected, arg1, 6);
	TEST(condition, __func__);
}


void test_memset()
{
	puts(__func__);
	test_memset_with_arg_hello_0_6();
	test_memset_with_arg_hello_h_6();
}