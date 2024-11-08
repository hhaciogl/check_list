#include "./test/libft.h"
#include "test.h"

void test_calloc_with_arg_2_3()
{

	char expected[] = {0,0,0,0,0,0};
	size_t arg_1 = 2;
	size_t arg_2 = 3;
	void *result = ft_calloc(arg_1, arg_2);
	if(!result)
		TEST(0, "Malloc failled");
	int condition = memcmp(expected, result, 6) == 0;
	TEST(condition, __func__);
	free(result);
}


void test_calloc()
{
	puts(__func__);
	test_calloc_with_arg_2_3();
}