#include "./test/libft.h"
#include "test.h"

void test_ft_substr_with_arg_hello_1_3()
{

	char *expected = "ell";
	char *arg_1 = "hello";
	unsigned arg_2 = 1;
	size_t arg_3 = 3;
	char *result = ft_substr(arg_1, arg_2, arg_3);
	int condition = strcmp(expected, result) == 0 && &result != &expected;

	TEST(condition, __func__);
}


void test_ft_substr()
{
	puts(__func__);
	test_ft_substr_with_arg_hello_1_3();
}