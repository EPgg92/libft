#include "libft.h"

long		ft_nbrlen(int input)
{
	long	i;

	i = 1;
	if (input < 0)
		++i;
	while ((input /= 10))
		++i;
	return (i);
}
