#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t n)
{
	size_t i;
	unsigned char *cdst;
	unsigned char *csrc;

	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	i = -1;
	if (csrc < cdst)
	{
		cdst
		while (--n)
			cdst = csrc;
	}
	else
		while (--n)
			*cdst++ = *csrc++;
	return (dst);
}
