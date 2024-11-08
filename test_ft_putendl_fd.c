#include "./test/libft.h"
#include "test.h"

void test_ft_putendl_fd_with_arg_ABC_fd()
{

	char *arg_1 = "ABC";
	int arg_2 = open("ft_putendl_fd.txt", O_RDWR | O_CREAT, 0644);
	if(arg_2 == -1)
	{
		TEST(0, "Cant open file");
		return;
	}
	
	ft_putendl_fd(arg_1, arg_2);
	puts("Manual test see ft_putendl_fd.txt and there is a 'ABC' in it.");
	close(arg_2);
	//remove("ft_putchar_fd.txt");
}


void test_ft_putendl_fd()
{
	puts(__func__);
	test_ft_putendl_fd_with_arg_ABC_fd();
}