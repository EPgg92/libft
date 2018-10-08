#include "libft.h"
#include <stdio.h>

char *ft_strncpy(char *dst, const char *src, size_t len)
{
	char *ptr;
	int len_dst;

	len_dst = ft_strlen(dst);
	ptr = dst;
	dst = ft_memcpy(ptr, src, len);
	ptr += len;
	ft_bzero(ptr, len_dst);
	return (dst);
}
