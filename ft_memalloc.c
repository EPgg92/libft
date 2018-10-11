#include "libft.h"

void *ft_memalloc(size_t size)
{
	unsigned char *m;

	if (!(m = (unsigned char*)malloc(sizeof(unsigned char) * size)))
		return (NULL);
	ft_bzero(m, size * sizeof(unsigned char));
	return (m);
}

// #include <stdio.h>
// int main()
// {
// 	int i = 6;
//
// 	char *a = (char*)ft_memalloc(i);
// 	while (i--)
// 		printf("%d\n", a[i]==0);
// }
