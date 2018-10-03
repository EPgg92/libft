#include "libft.h"

int ft_isprint(char c)
{
	return (c >= ' ' && c <= '~' + 1);
}
