#include "libft.h"

int ft_isalpha(char c)
{
	return (ft_islower(c) || ft_isupper(c));
}
