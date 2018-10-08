#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);

	return (ft_memchr(s + len + 1, c, len));
}

void *ft_memrchr(const void *s, int c, size_t n)
{
	while (n--)
		if (*(unsigned char*)s-- == (unsigned char)c)
			return ((unsigned char*)s + 1);
	return (NULL);
}
