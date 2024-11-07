#include "./test/libft.h"
#include "test.h"
#include <ctype.h>

void	test_isalpha_with_arg_a()
{
	int	expected = 1;
	char 	 arg = 'a';
	int	result = ft_isalpha(arg);

	TEST(expected == result, __func__);
}

void	test_isalpha_with_arg_3()
{
	int	expected = 0;
	char 	 arg = '3';
	int	result = ft_isalpha(arg);

	TEST(expected == result, __func__);
}

void	test_isalpha_with_arg_nul()
{
	int	expected = 0;
	char 	 arg = '\0';
	int	result = ft_isalpha(arg);

	TEST(expected == result, __func__);
}

void	test_isalpha_with_arg_128()
{
	int	expected = 0;
	int 	 arg = 128;
	int	result = ft_isalpha(arg);

	TEST(expected == result, __func__);
}

void	test_isalpha()
{
	puts(__func__);
	test_isalpha_with_arg_a();
	test_isalpha_with_arg_3();
	test_isalpha_with_arg_nul();
	test_isalpha_with_arg_128();
}
