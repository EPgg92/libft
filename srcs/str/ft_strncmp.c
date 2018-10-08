#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	return (ft_memcmp(s1, s2, \
		MIN((size_t)MIN(ft_strlen(s1) + 1, ft_strlen(s2) + 1), n)));
}
