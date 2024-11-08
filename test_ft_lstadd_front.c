#include "./test/libft.h"
#include "test.h"

void test_ft_lstadd_front_with_arg_list_nodeabc()
{

	char *expected_content = "abc";
	t_list *arg_1 = NULL;
	t_list *arg_2 = ft_lstnew("abc");
	ft_lstadd_back(&arg_1, arg_2);

	int condition = strcmp(expected_content, arg_1->content) == 0 && (arg_1->next == NULL);  

	TEST(condition, __func__);
	free(arg_1);
	free(arg_2);
}


void test_ft_lstadd_front()
{
	puts(__func__);
	test_ft_lstadd_front_with_arg_list_nodeabc();
}