#include "test.h"

void test(int condition, const char *msg)
{
	if (condition)
		printf(GREEN "** [OK] %s \n" RESET, msg);
    else
        printf(RED "xx FAIL %s: \n" RESET, msg);
}

int main()
{
	test_isdigit();
	test_strlen();
	return (0);
}