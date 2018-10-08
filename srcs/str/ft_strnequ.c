#include "libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	return ((s1 && s2 && ft_strncmp(s1, s2, n) == 0 ) ? 1 : 0 );
}
