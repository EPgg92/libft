

#include "libft.h"

char *ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t len;

	len = ft_strnlen(dst, n);
	ft_memcpy(dst, src, len);
	ft_bzero(dst, n - len);
	return (dst);
}
