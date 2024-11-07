#include "./test/libft.h"
#include "test.h"

void test_memmove_with_arg_abcd_ef_2()
{

	char	expected[] = "efcd";
	char	arg1[] = "abcd";
	char	arg2[] = "ef";
	size_t	arg3 = 2;
	char	*result = ft_memmove(arg1, arg2, arg3);
	int condition = memcmp(result, expected, 5) == 0;

	TEST(condition, __func__);
}


void test_memmove()
{
	puts(__func__);
	test_memmove_with_arg_abcd_ef_2();
}