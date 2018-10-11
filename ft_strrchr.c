#include "libft.h"
//#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
	char *ptr;
	int len;

	len = ft_strlen(s) + 1;
	ptr = NULL;
	while (len--)
	{
		if (*s == (unsigned char)c)
			ptr = (char *)s;
		s++;
	}
	return (ptr);
}
