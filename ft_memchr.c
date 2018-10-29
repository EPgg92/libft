/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.42.fr>            +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:08 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/29 17:29:12 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char*)s)[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
