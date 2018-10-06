#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char *cdst;
	unsigned char *csrc;

	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	if (csrc < cdst)
	{
		cdst += n - 1;
		csrc += n - 1;
		while (n--)
			*cdst-- = *csrc--;
	}
	else
		while (n--)
			*cdst++ = *csrc++;
	return (dst);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char **argv)
// {
// 	if (argc == 4)
// 	{
// 		printf("%s test\n", ft_memmove(argv[1], argv[1]+1, atoi(argv[3])));
// 		printf("%s gold\n", memmove(argv[2], argv[2]+1, atoi(argv[3])));
// 	}
// 	else
// 		printf("Lol les arguments!!\n");
// 	return 0;
// }
