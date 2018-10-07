
#include <ctype.h>
#include <stdio.h>
#include "libft.h"

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define RESET   "\x1b[0m"

void ft_green_red(char *str, int is_green)
{
	if (is_green)
		printf(GREEN "Pass: %s\n" RESET, str);
	else
		printf(RED "Fail: %s\n" RESET, str);
}

// void ft_test300(char *name_ft, int *f(void), int *g(void))
// {
// 	char *str;
// 	int i;
//
// 	i = -1;
// 	while (i < 300)
// 	{
//
// 	}
// }

int main()
{
	char a;

	a = 'a';
	ft_green_red("ft_isalpha",ft_isalpha(a) == isalpha(a));
	return (0);
}
