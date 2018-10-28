/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/28 21:36:11 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/28 21:36:15 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen(s);
	s += len;
	if ((unsigned char)c == 0)
		return ((char *)s);
	while (len--)
		if (*(--s) == (unsigned char)c)
			return ((char *)s);
	return (NULL);
}
