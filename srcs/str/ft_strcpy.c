#include "libft.h"

char *ft_strcpy(char * dst, const char * src)
{
	return (ft_strncpy(dst, src, ft_strlen(src)));
}
