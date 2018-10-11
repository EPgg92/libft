/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:16 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 18:24:16 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *n;
	int len;
	int i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	if ((n = ft_strnew(len)) == NULL)
		return (NULL);
	i = 0;
	while (*s)
		*n++ = f(i++, *s++);
	return (n - len);
}
