#include "./test/libft.h"
#include "test.h"

void test_ft_lstlast_with_arg_list()
{

	char *expected = "abc";
	t_list *arg_1 = NULL;
	t_list *arg_2 = ft_lstnew("abc");
	t_list *arg_3 = ft_lstnew("abcd");
	arg_3->next = arg_2;
	arg_2->next = arg_1;
	t_list *result = ft_lstlast(arg_3);


	int condition = strcmp(result->content, expected) == 0;  

	TEST(condition, __func__);
	free(arg_1);
	free(arg_2);
	free(arg_3);
}


void test_ft_lstlast()
{
	puts(__func__);
	test_ft_lstlast_with_arg_list();
}