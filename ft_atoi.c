/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:04 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 18:39:30 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long nbr;
	long long neg;

	neg = 1;
	nbr = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (ft_isdigit(*str) && *str)
	{
		if (!ft_isdigit(*(str + 1)))
		{
			nbr += *str - '0';
			break ;
		}
		nbr = (nbr + *str++ - '0') * 10;
	}
	return ((int)nbr * neg);
}
