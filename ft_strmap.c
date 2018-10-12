/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:16 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 19:35:37 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*n;
	int		len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	if ((n = ft_strnew(len)) == NULL)
		return (NULL);
	while (*s)
		*n++ = f(*s++);
	return (n - len);
}
