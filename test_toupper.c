#include "./test/libft.h"
#include "test.h"

void test_toupper_with_arg_h()
{

	int expected = 'H';
	char arg = 'h';
	int result = ft_toupper(arg);
	int condition = expected == result;

	TEST(condition, __func__);
}
void test_toupper_with_arg_H()
{

	int expected = 'H';
	char arg = 'H';
	int result = ft_toupper(arg);
	int condition = expected == result;

	TEST(condition, __func__);
}

void test_toupper()
{
	puts(__func__);
	test_toupper_with_arg_h();
	test_toupper_with_arg_H();
}