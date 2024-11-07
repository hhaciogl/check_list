#include "./test/libft.h"
#include "test.h"

void	test_strlen_with_arg_hello()
{
	size_t	expected = 5;
	char *	arg = "hello";
	size_t	result = ft_strlen("hello");

	TEST(expected == result, __func__);
}




void	test_strlen()
{
	puts(__func__);
	test_strlen_with_arg_hello();
}
