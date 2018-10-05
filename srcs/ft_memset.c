//#include "libft.h"
#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *s;

	s = (unsigned char *)b;
	while(len)
		s[--len] = (unsigned char)c;
	return (s);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	char *lol = malloc(15);
//
// 	ft_memset(lol, 65, 6);
// 	printf("%s\n", lol);
// }
