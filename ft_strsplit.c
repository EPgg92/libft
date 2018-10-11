#include "libft.h"
#include <stdio.h>

static int ft_count_w(char *str, int len)
{
	int nw;
	int i;

	i = 0;
	nw = 0;
	while (i < len)
	{
		if (str + i)
		{
			i += ft_strlen(str + i);
			nw++;
		}
		if (str + i == '\0')
			printf("%c\n", 'A');
		i++;
	}
	return (nw);
}


char **ft_strsplit(char const *s, char c)
{
	char *str;
	char **tab;
	int len;
	int i;
	int nw;

	str = ft_strdup(s);
	len = ft_strlen(s);
	ft_strreplace(str, c, '\0');
	//printf("%d\n", ft_count_w(str,len));
	if ((tab = (char **)malloc(sizeof(char*) * ft_count_w(str,len))) == NULL)
		return (NULL);
	i = 0;
	nw = 0;
	while (i < len)
	{
		if (str + i)
		{
			*tab++ = ft_strdup(str + i);
			i += ft_strlen(str + i);
		}
		i++;
	}
	return(tab);
}
