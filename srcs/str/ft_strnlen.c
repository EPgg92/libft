#include "libft.h"

int ft_strnlen(const char *str, size_t n)
{
	int i;

	i = 0;
	while (*str && n-- && ++i)
		;
	return (i);
}


// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char **argv)
// {
//
// 	printf("%d %d\n", ft_strnlen(argv[1], atoi(argv[2])), atoi(argv[2]));
// 	return 0;
// }
