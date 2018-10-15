/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:20 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 20:02:46 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

// static int	ft_specspace(char c)
// {
// 	return (c == '\n' || c == ' ' || c == '\t');
// }
//
// char		*ft_strtrim(char const *s)
// {
// 	char	*str;
// 	int		len;
//
// 	if (!s)
// 		return (NULL);
// 	while (ft_specspace(*s) && *s)
// 		s++;
// 	if (*s == '\0')
// 		return (ft_strnew(1));
// 	len = ft_strlen(s);
// 	s += len - 1;
// 	while (ft_specspace(*s) && len--)
// 		s--;
// 	if ((str = ft_strnew(len)) == NULL)
// 		return (NULL);
// 	s -= len - 1;
// 	ft_strncpy(str, s, len);
// 	return (str);
// }

char		*ft_strtrim(char const *s)
{
	return (ft_strtrimcharset(s, "\n \t"));
}
