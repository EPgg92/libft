#include "libft.h"

char *ft_strcpy(char * dst, const char * src)
{
	return (ft_memcpy(dst, src, strlen(src)+1));
}
