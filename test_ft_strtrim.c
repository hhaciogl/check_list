#include "./test/libft.h"
#include "test.h"

void test_ft_strtrim_with_arg_abchelloabc_abc()
{

	char *expected = "hello";
	char arg_1[] = "abchelloabc";
	char arg_2[] = "abc";
	char *result = ft_strtrim(arg_1, arg_2);
	int condition = strcmp(expected, result) == 0;

	TEST(condition, __func__);
}


void test_ft_strtrim()
{
	puts(__func__);
	test_ft_strtrim_with_arg_abchelloabc_abc();
}