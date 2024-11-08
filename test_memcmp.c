#include "./test/libft.h"
#include "test.h"

void test_memcmp_with_arg_0hellO_Ohell0_6()
{

	int expected = 0;
	char arg_1[] = {0, 'h', 'e', 'l','l','O',0};
	char arg_2[] = {'O', 'h', 'e', 'l','l', 0};
	size_t arg_3 = 6; 
	int result = ft_memcmp(arg_1, arg_2, arg_3);
	int condition = expected != result;

	TEST(condition, __func__);
}

void test_memcmp_with_arg_0hellO_0_1()
{

	int expected = 0;
	char arg_1[] = {0, 'h', 'e', 'l','l','O',0};
	char arg_2[] = {0};
	size_t arg_3 = 1; 
	int result = ft_memcmp(arg_1, arg_2, arg_3);
	int condition = expected == result;

	TEST(condition, __func__);
}


void test_memcmp()
{
	puts(__func__);
	test_memcmp_with_arg_0hellO_Ohell0_6();
	test_memcmp_with_arg_0hellO_0_1();
}