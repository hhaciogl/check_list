#include "./test/libft.h"
#include "test.h"

void test_memchr_with_arg_0hello_l()
{

	char *expected = "llo";
	char arg_1[] = {'\0', 'h', 'e', 'l', 'l', 'o', '\0'};
	char arg_2 = 'l';
	size_t arg_3 = 6;
	char *result = ft_memchr(arg_1, arg_2, arg_3);
	int condition = strcmp(expected, result) == 0;
	TEST(condition, __func__);
}

void test_memchr_with_arg_0hello_z()
{

	char *expected = NULL;
	char arg_1[] = {'\0', 'h', 'e', 'l', 'l', 'o', '\0'};
	char arg_2 = 'z';
	size_t arg_3 = 6;
	char *result = ft_memchr(arg_1, arg_2, arg_3);
	int condition = expected == result;
	TEST(condition, __func__);
}


void test_memchr()
{
	puts(__func__);
	test_memchr_with_arg_0hello_l();
	test_memchr_with_arg_0hello_z();
}