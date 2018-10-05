#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *mem;

	mem = (unsigned char *)dst;
	while (n--)
		*mem++ = *(unsigned char *)src++;
	return (mem);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	char c = '9';
// 	char d = 'j';
// 	int i = 10;
// 	int j = 10;
// 	char *str = malloc(i);
// 	char *str0 = malloc(j);
// 	printf("test\n");
// 	while (i && j)
// 	{
// 		str[--i] = c--;
// 		str0[--j] = d--;
// 	}
// 	printf("test\n");
// 	ft_memcpy(str , str0, 0);
// 	printf("%s\n", str);
// }
