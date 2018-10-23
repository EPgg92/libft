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

	nbr = 0;
	while (ft_isspace(*str))
		str++;
	neg = (*str == '-') ? -1 : 1;
	str += (*str == '-' || *str == '+') ? 1 : 0;
	while (ft_isdigit(*str))
		nbr = nbr * 10 + *str++ - '0';
	return ((int)nbr * neg);
}
