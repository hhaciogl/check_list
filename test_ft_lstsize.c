#include "./test/libft.h"
#include "test.h"

void test_ft_lstsize_with_arg_list()
{

	int expected = 2;
	t_list *arg_1 = NULL;
	t_list *arg_2 = ft_lstnew("abc");
	t_list *arg_3 = ft_lstnew("abc");
	arg_3->next = arg_2;
	arg_2->next = arg_1;
	int result = ft_lstsize(arg_3);


	int condition = expected == result;  

	TEST(condition, __func__);
	free(arg_1);
	free(arg_2);
	free(arg_3);
}


void test_ft_lstsize()
{
	puts(__func__);
	test_ft_lstsize_with_arg_list();
}