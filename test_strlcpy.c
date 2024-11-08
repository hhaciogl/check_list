#include "./test/libft.h"
#include "test.h"

void test_strlcpy_with_arg_hello_empytStr_1()
{

	size_t expected = 0;
	char  *expected2 = "";
	char arg1[7] = "hello";
	char arg2[] = "";
	size_t arg3 = 1;
	size_t result = ft_strlcpy(arg1, arg2, arg3);
	int cond_return = expected == result;
	int cond_arg1 = strcmp(expected2, arg1) == 0;
	TEST(cond_arg1 && cond_return, __func__);
}


void test_strlcpy()
{
	puts(__func__);
	test_strlcpy_with_arg_hello_empytStr_1();
}