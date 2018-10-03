#include "libft.h"

int ft_isascii(char c)
{
	return (c >= ' ' - 32 && c <= '~' + 1);
}
