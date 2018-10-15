#include "libft.h"

char *ft_strchar(char c)
{
	char *str;

	str = ft_strnew(1);
	str[0] = c;
	return (str);
}
