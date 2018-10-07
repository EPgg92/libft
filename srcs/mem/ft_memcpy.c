#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *mem;
	size_t i;

	i = 0;
	mem = (unsigned char *)dst;
	while (n-- && ++i)
		*mem++ = *(unsigned char *)src++;
	return (mem - i);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char **argv)
// {
// 	if (argc == 4)
// 	{
// 		char *a = memcpy(argv[1] ,argv[2] , atoi(argv[3]));
// 		char *b = ft_memcpy(argv[1] ,argv[2] , atoi(argv[3]));
// 		printf("%s\n", a);
// 		printf("%s\n", b);
// 	}
// 	else
// 	printf("lol les arguments\n" );
// }
