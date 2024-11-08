#include "./test/libft.h"
#include "test.h"

void test_ft_itoa_with_arg_342()
{

	char *expected = "342";
	int arg = 342;
	char *result = ft_itoa(arg);
	int condition = strcmp(expected, result) == 0;

	TEST(condition, __func__);
}

void test_ft_itoa_with_arg_min342()
{

	char *expected = "-342";
	int arg = -342;
	char *result = ft_itoa(arg);
	int condition = strcmp(expected, result) == 0;

	TEST(condition, __func__);
}


void test_ft_itoa()
{
	puts(__func__);
	test_ft_itoa_with_arg_342();
	test_ft_itoa_with_arg_min342();
}