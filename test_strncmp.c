#include "./test/libft.h"
#include "test.h"

void test_strncmp_with_arg_hell_hello_4()
{

	int expected = 0;
	char arg_1[] = "hell";
	char arg_2[] = "hello";
	size_t arg_3 = 4;
	int result = ft_strncmp(arg_1, arg_2, arg_3);
	int condition = expected == result;

	TEST(condition, __func__);
}

void test_strncmp_with_arg_emptyStr_hello_1()
{

	int expected = 0;
	char arg_1[] = "";
	char arg_2[] = "hello";
	size_t arg_3 = 1;
	int result = ft_strncmp(arg_1, arg_2, arg_3);
	int condition = expected != result;

	TEST(condition, __func__);
}
void test_strncmp_with_arg_hello_hello_0()
{

	int expected = 0;
	char arg_1[] = "hello";
	char arg_2[] = "hello";
	size_t arg_3 = 0;
	int result = ft_strncmp(arg_1, arg_2, arg_3);
	int condition = expected == result;

	TEST(condition, __func__);
}


void test_strncmp()
{
	puts(__func__);
	test_strncmp_with_arg_hell_hello_4();
	test_strncmp_with_arg_emptyStr_hello_1();
	test_strncmp_with_arg_hello_hello_0();
}