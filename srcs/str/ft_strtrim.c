#include "libft.h"
#include <stdio.h>

char *ft_strtrim(char const *s)
{
	char *str;
	int len;

	str = ft_strdup(s);
	len = ft_strlen(str);
	while (str)
	{
		printf("%c %c\n", *str, *(str + 1));
		if (ft_isspace(*str) && *(str + 1) != '\0')
			*str = *(str + 1);
		str++;
	}
	return (str);
}
