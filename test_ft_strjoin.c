#include "./test/libft.h"
#include "test.h"

void test_ft_strjoin_with_arg_hello_world()
{

	char *expected = "hello world";
	char *arg_1 = "hello ";
	char *arg_2 = "world";
	char *result = ft_strjoin(arg_1, arg_2);
	int condition = strcmp(expected, result) == 0 && &expected != &result;

	TEST(condition, __func__);
}


void test_ft_strjoin()
{
	puts(__func__);
	test_ft_strjoin_with_arg_hello_world();
}