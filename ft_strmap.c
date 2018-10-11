#include "libft.h"

#include <stdio.h>
char *ft_strmap(char const *s, char (*f)(char))
{
	char *n;
	int len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	if ((n = ft_strnew(len)) == NULL)
		return (NULL);
	while (*s)
		*n++ = f(*s++);
	return (n - len);
}
