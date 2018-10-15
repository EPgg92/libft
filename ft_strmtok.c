#include "libft.h"

char *ft_strmtok(char **stringp, const char *delim)
{
	char *begin;
	char *end;

	begin = *stringp;
	if (begin == NULL)
		return (NULL);
	while (ft_isincharset(*begin,delim))
		begin++;
	end = begin + ft_strcspn(begin, delim);
	if (*end)
	{
		*end++ = '\0';
		*stringp = end;
	}
	else
		*stringp = NULL;
	return (begin);
}
