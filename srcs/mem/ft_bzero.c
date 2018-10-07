//#include "libft.h"
#include <string.h>

void *ft_bzero(void *b, size_t n)
{
	unsigned char c;

	c = '\0';
	return ((void *)ft_memset(b, c, n));
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	int i = 15;
// 	char *lol = malloc(i);
// 	while (i)
// 		lol[--i] = 'X';
// 	ft_bzero(lol, 14);
// 	printf("%s\n", lol);
// 	while (i < 20)
// 		printf("%c", lol[i++]);
// 	printf("\n");
// }
