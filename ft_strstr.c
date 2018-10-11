#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	if (*haystack && *needle)
		return (memmem(haystack, ft_strlen(haystack), needle, ft_strlen(needle)));
	return (NULL);
}
