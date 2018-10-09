

#include "libft.h"

char *ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t len;

	len = ft_strlen(src);
    ft_memcpy(dst, src, MIN(len, n));
    if (len < n)
		ft_bzero(dst+len, n-len);
    return (dst);
}
