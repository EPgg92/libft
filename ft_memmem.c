/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmem.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:09 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 18:54:30 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmem(const void *big, size_t big_len, const void *little,
		size_t little_len)
{
	unsigned char	*b;
	unsigned char	*l;
	unsigned char	*ptr;
	size_t			i;

	b = (unsigned char *)big;
	l = (unsigned char *)little;
	i = 0;
	if (big_len < little_len || little_len == 0 || big_len == 0)
		return (NULL);
	while (big_len-- && *l)
	{
		if (*b++ == *l++)
		{
			ptr = b;
			while (*b++ == *l++)
				if (i++ == little_len)
					return (ptr);
		}
		i = 0;
	}
	return (NULL);
}
