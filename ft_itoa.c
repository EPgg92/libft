/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:07 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 02:50:47 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		neg;
	long	nbr;

	nbr = (long)n;
	neg = 0;
	len = ft_nbrlen(nbr);
	if ((str = ft_strnew(len)) == NULL)
		return (NULL);
	if (nbr < 0)
		neg = 1;
	if (nbr == -2147483648)
		if ((ft_strcpy(str, "-2147483648")) != NULL)
			return (str);
	nbr = ft_abs(nbr);
	while (len)
	{
		str[--len] = '0' + (nbr % 10);
		nbr /= 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
