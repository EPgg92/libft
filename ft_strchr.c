/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/28 21:34:40 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/28 21:36:00 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t i;
	size_t len;

	i = -1;
	len = ft_strlen(s) + 1;
	while (++i < len)
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (&((char *)s)[i]);
	return (NULL);
}
