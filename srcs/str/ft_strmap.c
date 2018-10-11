#include "libft.h"

#include <stdio.h>
char *ft_strmap(char const *s, char (*f)(char))
{
	char *n;
	int len;

	len = ft_strlen(s);
	if (!s || !f || (n = ft_strnew(len)) == NULL)
		return (NULL);
	while (*s)
		*n++ = f(*s++);
	return (n - len);
}
