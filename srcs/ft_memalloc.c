#include "libft.h" // to keep
// #include <stdlib.h> // to remove
#include <string.h>

void *ft_memalloc(size_t size)
{
	unsigned char *m;

	if (!(m = (unsigned char*)malloc(sizeof(unsigned char) * size)))
		return (NULL);
	while (--size)
		m[size] = 0;
	return (m);
}

// #include <stdio.h>
//
// int main()
// {
// 	int i = 3;
//
// 	char *a = (char*)ft_memalloc(i);
// 	while (i)
// 		a[--i] = 'a';
// 	printf("%s\n", a);
// }
