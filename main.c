

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

int main(int argc, char  **argv)
{
	if (argc == 1)
	{
		// char *a1 = argv[1];
		// char *a2 = argv[2];
		// char *b1 = argv[1];
		// char *b2 = argv[2];
		//
		// char *a = strncpy(a1, a2, atoi(argv[3]));
		// char *b = ft_strncpy(b1, b2, atoi(argv[3]));
		// printf("%s\n", a);
		// printf("%s\n", b);
		//
		// //ft_green_red( "ft_strncpy",strncpy(argv[1], argv[2], atoi(argv[3])) == ft_strncpy(argv[1], argv[2], atoi(argv[3])));

		//printf("%c %d\n", (char)ft_tolower(argv[1][0]), ft_tolower(argv[1][0]));
		//printf("%c %d\n", (char)ft_toupper(argv[1][0]), ft_toupper(argv[1][0]));

		//printf("%s\n", ft_strrev(argv[1]));
		// char *a = argv[1];
		// char b = argv[2][0];
		// char *c = argv[1];
		// char d = argv[2][0];
		//
		// printf("%s\n", ft_strrchr(a, b));
		// printf("%s\n", strrchr(c, d));

		// printf("%zu\n", ft_nbrlen(atoi(argv[1])));
		// printf("%s\n", ft_itoa(atoi(argv[1])));
		// ft_putnbr(atoi(argv[1]));

		printf("%s\n", argv[argc-1] );
		char **tab = ft_strsplit("split  ||this|for|me|||||!|", '|');
		while (*tab)
			printf("%s\n", *tab++);

		//while (*tab != NULL)
		//	printf("%s\n", *tab++);

		//printf("%s\n", ft_strtrim(argv[1]));
		//printf("%d\n", atoi(argv[1]));
		//printf("%d\n", ft_atoi(argv[1]));


		// char *a = argv[1];
		// char *b = argv[2];
		// char *c = argv[1];
		// char *d = argv[2];
		// printf("%s\n", ft_strncat(a, b , atoi(argv[1])));
		// printf("%s\n", strncat(c, d, atoi(argv[1])));

		// char *a = argv[1];
		// printf("%s\n", ft_strtrim(a));

	}
	else
	{
		printf(YELLOW "LOL " RESET);
		printf(RED "SVP " RESET);
		printf(GREEN "LES " RESET);
		printf(BLUE "ARGUMENTS\n" RESET);
	}
	return (0);
}
