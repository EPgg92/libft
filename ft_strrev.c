/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrev.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:19 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 18:24:19 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrev(const char *str)
{
	int len;
	char *rev;

	len = ft_strlen(str);
	rev = ft_strnew(len);
	while (len)
		rev[--len] = *str++;
	return (rev);
}
