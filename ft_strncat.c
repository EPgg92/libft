/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:16 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 19:40:13 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*ptr;
	size_t 	len;
	size_t 	min;

	ptr = s1;
	len = ft_strlen(s2) + 1;
	s1 = ft_strchr(s1, 0);
	min = MIN(len, n);
	s1 = ft_strncpy(s1, s2, min);
	return (ptr);
}
