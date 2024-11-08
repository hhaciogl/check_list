#include "./test/libft.h"
#include "test.h"

void test_ft_split_with_arg_hello_world_()
{

	char *exp_1 = "hello";
	char *exp_2 = "world";
	char *expected[] = { exp_1, exp_2 };

	char *arg_1 = "hello_world";
	char arg_2 = '_';
	char **result = ft_split(arg_1, arg_2);
	int condition = 1;
	int i = 0;
	while (result[i])
	{
		if(strcmp(result[i], expected[i]) != 0)
			condition = 0;
		i++;
	}

	TEST(condition, __func__);
}


void test_ft_split()
{
	puts(__func__);
	test_ft_split_with_arg_hello_world_();
}