#include "./test/libft.h"
#include "test.h"

void test_tolower_with_arg_H()
{

	int expected = 'h';
	char arg = 'H';
	int result = ft_tolower(arg);
	int condition = expected == result;

	TEST(condition, __func__);
}

void test_tolower_with_arg_h()
{

	int expected = 'h';
	char arg = 'h';
	int result = ft_tolower(arg);
	int condition = expected == result;

	TEST(condition, __func__);
}

void test_tolower()
{
	puts(__func__);
	test_tolower_with_arg_H();
	test_tolower_with_arg_h();
}