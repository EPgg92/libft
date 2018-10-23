/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:12 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 19:02:25 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *scr)
{
	char *begin;

	begin = dest;
	dest += ft_strlen(dest);
	while (*scr)
		*dest++ = *scr++;
	*dest = '\0';
	return (begin);
}
