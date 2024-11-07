#include "./test/libft.h"
#include "test.h"

void test_memcpy_with_arg_emptyStr_hello_6()
{

	char expected[] = "hello";
	char arg1[6] = "";
	char arg2[] = "hello";
	size_t arg3 = 6;
	char * result = ft_memcpy(arg1, arg2, arg3);
	int condition = memcmp(result, expected, 6) == 0;

	TEST(condition, __func__);
}

void test_memcpy_with_arg_123_23_2()
{

	char expected[] = "233";
	char arg1[6] = "123";
	char arg2[6] = "23";
	size_t arg3 = 2;
	char * result = ft_memcpy(arg1, arg2, arg3);

	int condition = memcmp(result, expected, 4) == 0;

	TEST(condition, __func__);
}


void test_memcpy()
{
	puts(__func__);
	test_memcpy_with_arg_emptyStr_hello_6();
	test_memcpy_with_arg_123_23_2();
}