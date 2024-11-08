#include "./test/libft.h"
#include "test.h"

void test_lstnew_with_arg_abc()
{

	char *expected_content = "abc";
	t_list *expected_next = NULL;
	char *arg = "abc";
	t_list *result = ft_lstnew(arg);
	int condition = strcmp(expected_content, result->content) == 0 && (result->next == expected_next);  

	TEST(condition, __func__);
	free(result);
}


void test_ft_lstnew()
{
	puts(__func__);
	test_lstnew_with_arg_abc();
}