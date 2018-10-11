#include "libft.h"

char *ft_strrev(const char *str)
{
	int len;
	char *rev;

	len = ft_strlen(str);
	rev = ft_strnew(len);
	while (len)
		rev[--len] = *str++;
	return (rev);
}
