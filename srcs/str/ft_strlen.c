#include "libft.h"

int	ft_strlen(char *str)
{
	return (*str ? ft_strlen(++str) + 1 : 0);
}
