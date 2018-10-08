#include "libft.h"

char *ft_strdup(const char *s1)
{
	char *m;
	int len;

	len = ft_strlen(s1);
	if ((m = ft_strnew(len)) == NULL)
		return (NULL);
	ft_strcpy(m, s1);
	return (m);
}
