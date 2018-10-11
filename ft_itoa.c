#include "libft.h"
char *ft_itoa(int n)
{
	char *str;
	int len;
	int neg;
	long nbr;

	nbr = (long)n;
	neg = 0;
	len = ft_nbrlen(nbr);
	if ((str = ft_strnew(len)) == NULL)
		return (NULL);
	if (nbr < 0)
		neg = 1;
	nbr = ABS(nbr);
	while (len)
	{
		str[--len] = '0' + (nbr % 10);
		nbr /= 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
