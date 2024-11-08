#include "./test/libft.h"
#include "test.h"

char arg_2(unsigned i, char a)
{
	(void)i;
	return (toupper(a));
}

void test_ft_strmapi_with_arg_abc_toupper()
{

	char *expected = "ABC";
	char *arg_1 = "abc";
	char *result = ft_strmapi(arg_1, arg_2);
	int condition = strcmp(expected, result) == 0;

	TEST(condition, __func__);
	free(result);
}


void test_ft_strmapi()
{
	puts(__func__);
	test_ft_strmapi_with_arg_abc_toupper();
}