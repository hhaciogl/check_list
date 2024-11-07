#include "./test/libft.h"
#include "test.h"

void	test_strlen_with_arg_hello()
{
	size_t	expected = 5;
	char *	arg = "hello";
	size_t	result = ft_strlen(arg);

	TEST(expected == result, __func__);
}

void	test_strlen_with_arg_emptyStr()
{
	size_t	expected = 0;
	char *	arg = "";
	size_t	result = ft_strlen(arg);
	int condition = expected == result;

	TEST(condition, __func__);
}




void	test_strlen()
{
	puts(__func__);
	test_strlen_with_arg_hello();
	test_strlen_with_arg_emptyStr();
}
