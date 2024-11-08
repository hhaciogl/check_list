#include "./test/libft.h"
#include "test.h"

void test_atoi_with_arg_abc()
{

	int expected = 0;
	char *arg = "abc";
	int result = ft_atoi(arg);
	int condition = expected == result;

	TEST(condition, __func__);
}

void test_atoi_with_arg_123()
{

	int expected = 123;
	char *arg = "123";
	int result = ft_atoi(arg);
	int condition = expected == result;

	TEST(condition, __func__);
}

void test_atoi_with_arg_000min0123()
{

	int expected = -123;
	char *arg = "   -0123";
	int result = ft_atoi(arg);
	int condition = expected == result;

	TEST(condition, __func__);
}
void test_atoi_with_arg_min2147483648()
{

	int expected = -2147483648;
	char *arg = "   -2147483648";
	int result = ft_atoi(arg);
	int condition = expected == result;

	TEST(condition, __func__);
}
void test_atoi_with_arg_2147483647()
{

	int expected = 2147483647;
	char *arg = "   2147483647";
	int result = ft_atoi(arg);
	int condition = expected == result;

	TEST(condition, __func__);
}

void test_atoi()
{
	puts(__func__);
	test_atoi_with_arg_abc();
	test_atoi_with_arg_123();
	test_atoi_with_arg_000min0123();
	test_atoi_with_arg_min2147483648();
	test_atoi_with_arg_2147483647();
}