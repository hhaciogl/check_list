#include "./test/libft.h"
#include "test.h"

void arg_2_(unsigned i, char* c)
{
	(void)i;
	*c = toupper(*c);
}

void test_ft_striteri_with_arg_abc_toupper()
{

	char *expected = "ABC";
	char arg_1[] = "abc";
	ft_striteri(arg_1, arg_2_);
	int condition = strcmp(expected, arg_1)==0;

	TEST(condition, __func__);
}


void test_ft_striteri()
{
	puts(__func__);
	test_ft_striteri_with_arg_abc_toupper();
}