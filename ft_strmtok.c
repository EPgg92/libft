/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmtok.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 02:40:47 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 02:41:00 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmtok(char **stringp, const char *delim)
{
	char *begin;
	char *end;

	begin = *stringp;
	if (begin == NULL)
		return (NULL);
	while (ft_isincharset(*begin, delim))
		begin++;
	end = begin + ft_strcspn(begin, delim);
	if (*end)
	{
		*end++ = '\0';
		*stringp = end;
	}
	else
		*stringp = NULL;
	return (begin);
}
