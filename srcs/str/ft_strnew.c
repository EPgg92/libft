#include "libft.h"

char *ft_strnew(size_t size)
{
	char *m;

	if ((m = ft_memalloc(size + 1)) == NULL)
		return (NULL);
	return (m);
}
