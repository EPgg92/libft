/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:20 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 18:24:20 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strtrim(char const *s)
{
	char *str;
	int len;

	str = ft_strdup(s);
	len = ft_strlen(str);
	while (str)
	{
		printf("%c %c\n", *str, *(str + 1));
		if (ft_isspace(*str) && *(str + 1) != '\0')
			*str = *(str + 1);
		str++;
	}
	return (str);
}
