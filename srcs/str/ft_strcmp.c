#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
	return (ft_memcmp(s1, s2, MIN(ft_strlen(s1) + 1, ft_strlen(s2) + 1)));
}
