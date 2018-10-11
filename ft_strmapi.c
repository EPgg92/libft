#include "libft.h"

#include <stdio.h>
char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *n;
	int len;
	int i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	if ((n = ft_strnew(len)) == NULL)
		return (NULL);
	i = 0;
	while (*s)
		*n++ = f(i++, *s++);
	return (n - len);
}
