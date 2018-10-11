/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:14 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 19:19:06 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*m;
	int		len;

	len = ft_strlen(s1);
	if ((m = ft_strnew(len)) == NULL)
		return (NULL);
	ft_strcpy(m, s1);
	return (m);
}
