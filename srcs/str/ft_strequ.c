#include "libft.h"

int ft_strequ(char const *s1, char const *s2)
{
	return ((s1 && s2 && ft_strcmp(s1, s2) == 0 ) ? 1 : 0);
}
