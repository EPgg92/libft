/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:19 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 19:11:24 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_w(char *str, int len)
{
	int nw;
	int	i;

	i = 0;
	nw = 0;
	while (i < len)
	{
		if (str + i)
		{
			i += ft_strlen(str + i);
			nw++;
		}
		i++;
	}
	return (nw);
}

char		**ft_strsplit(char const *s, char c)
{
	char	*str;
	char	**tab;
	int		len;
	int		i;
	int		nw;

	str = ft_strdup(s);
	len = ft_strlen(s);
	ft_strreplace(str, c, '\0');
	if ((tab = (char **)malloc(sizeof(char*) * ft_count_w(str, len))) == NULL)
		return (NULL);
	i = 0;
	nw = 0;
	nw++;
	while (i < len)
	{
		if (str + i)
		{
			*tab++ = ft_strdup(str + i);
			i += ft_strlen(str + i);
		}
		i++;
	}
	return (tab);
}
