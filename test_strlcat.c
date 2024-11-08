#include "./test/libft.h"
#include "test.h"

void test_strlcat_with_arg_hello__world_9()
{

	size_t expected_return = 11;
	char *expected_arg_1 = "hello wo";
	char arg_1[20] = "hello";
	char arg_2[] = " world";
	size_t arg_3 = 9;
	size_t result = ft_strlcat(arg_1, arg_2, arg_3);
	int condition_return = expected_return == result;
	int condition_arg1 = strcmp(expected_arg_1, arg_1) == 0; 

	TEST(condition_arg1 && condition_return, __func__);
}


void test_strlcat()
{
	puts(__func__);
	test_strlcat_with_arg_hello__world_9();
}