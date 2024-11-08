#include "./test/libft.h"
#include "test.h"

void test_strrchr_with_arg_hello_l()
{

	char expected[] = "lo";
	char arg_1[] = "hello";
	char arg_2 = 'l';
	char *result = ft_strrchr(arg_1, arg_2);
	int condition = strcmp(expected, result) == 0;

	TEST(condition, __func__);
}

void test_strrchr_with_arg_hello_z()
{

	char *expected = NULL;
	char arg_1[] = "hello";
	char arg_2 = 'z';
	char *result = ft_strrchr(arg_1, arg_2);
	int condition = expected == result;

	TEST(condition, __func__);
}
void test_strrchr_with_arg_hello_nul()
{

	char *expected = "";
	char arg_1[] = "hello";
	char arg_2 = '\0';
	char *result = ft_strrchr(arg_1, arg_2);
	int condition = strcmp(expected, result) == 0;

	TEST(condition, __func__);
}


void test_strrchr()
{
	puts(__func__);
	test_strrchr_with_arg_hello_l();
	test_strrchr_with_arg_hello_z();
	test_strrchr_with_arg_hello_nul();
}