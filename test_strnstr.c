#include "./test/libft.h"
#include "test.h"

void test_strnstr_with_arg_hello_ll_0()
{

	char *expected = NULL;
	char arg_1[] = "hello";
	char arg_2[] = "ll";
	size_t arg_3 = 0;
	char *result = ft_strnstr(arg_1, arg_2, arg_3);
	int condition = expected == result;

	TEST(condition, __func__);
}

void test_strnstr_with_arg_hello_ll_4()
{

	char *expected = "llo";
	char arg_1[] = "hello";
	char arg_2[] = "ll";
	size_t arg_3 = 4;
	char *result = ft_strnstr(arg_1, arg_2, arg_3);
	int condition = strcmp(expected, result) == 0;

	TEST(condition, __func__);
}

void test_strnstr_with_arg_hello_ll_3()
{

	char *expected = NULL;
	char arg_1[] = "hello";
	char arg_2[] = "ll";
	size_t arg_3 = 3;
	char *result = ft_strnstr(arg_1, arg_2, arg_3);
	int condition = expected == result;

	TEST(condition, __func__);
}

void test_strnstr_with_arg_hello_0_5()
{

	char *expected = "hello";
	char arg_1[] = "hello";
	char arg_2[] = "";
	size_t arg_3 = 5;
	char *result = ft_strnstr(arg_1, arg_2, arg_3);
	int condition = strcmp(expected, result) == 0;

	TEST(condition, __func__);
}


void test_strnstr()
{
	puts(__func__);
	test_strnstr_with_arg_hello_ll_0();
	test_strnstr_with_arg_hello_ll_4();
	test_strnstr_with_arg_hello_ll_3();
	test_strnstr_with_arg_hello_0_5();

}