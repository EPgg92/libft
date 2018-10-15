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

static int	ft_intword(char const *s, char *sep)
{
	char *token;
	char *string;
	char *begin;
	int	nw;

	nw = 0;
	if ((begin = ft_strtrimcharset(ft_strdup(s), sep)) == NULL)
		return (0);
	string = begin;
	while ((token = ft_strmtok(&string, sep)) != NULL)
		nw++;
	ft_strdel(&begin);
	return (nw);
}

static char	**ft_filltab(char const *s, char *sep, char **tab, int nw)
{
	char *token;
	char *string;
	char *begin;

	if ((begin = ft_strtrimcharset(ft_strdup(s), sep)) == NULL)
		return (NULL);
	string = begin;
	while ((token = ft_strmtok(&string, sep)) != NULL)
		*tab++ = token;
	*tab = NULL;
	ft_strdel(&begin);
	tab -= nw;
	return (tab);
}

char		**ft_strsplit(char const *s, char c)
{
	char **ret;
	char sep[2];
	int	nw;

	sep[0] = c;
	sep[1] = '\0';
	if (!s)
		return (NULL);
	if ((nw = ft_intword(s, sep)) == 0)
		return (NULL);
	if ((ret = (char **)malloc(sizeof(char*) * nw + 1)) == NULL)
		return (NULL);
	return (ft_filltab(s, sep, ret, nw));
}
