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

char	*ft_strtrim(char const *s)
{
	char	*str;
	char	*ptr;
	int		len;

	str = ft_strdup(s);
	len = ft_strlen(str);
	len++;
	ptr = str;
	while (str)
	{
		if (ft_isspace(*str) && *(str + 1) != '\0')
			*str = *(str + 1);
		str++;
	}
	return (ptr);
}
