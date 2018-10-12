/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:18 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 19:50:07 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t len_needle;

	if (*needle == '\0')
		return ((char *)haystack);
	len_needle = ft_strlen(needle);
	while (*haystack != '\0' && len-- >= len_needle)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
