#include "./test/libft.h"
#include "test.h"

void test_strdup_with_arg_hello()
{

	char *expected = "hello";
	char arg[] = "hello";
	char *result = ft_strdup(arg);
	int condition = strcmp(expected, result) == 0 && &result != &expected;

	TEST(condition, __func__);
	free(result);
}


void test_strdup()
{
	puts(__func__);
	test_strdup_with_arg_hello();
}