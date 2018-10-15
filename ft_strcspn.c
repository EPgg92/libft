/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strspn.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: exam <marvin@le-101.fr>                    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 11:37:14 by exam         #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 12:29:40 by exam        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"


// #include <string.h>
//
// char *ft_strchr(const char *str, int c)
// {
// 	while (*str)
// 		if (*str++ == (char)c)
// 			return ((char *)str - 1);
// 	return (NULL);
// }


size_t ft_strcspn(const char *s, const char *charset)
{
	size_t i;
	char ptr;

	i = 0;
	while (*s && (ptr = ft_strchr(charset, *s++) == NULL))
		i++;
	return (i);
}

// #include <stdio.h>
//
// int main(int argc, char **argv) {
//
// 	if (argc == 3)
// 	{
// 		char *a = argv[1];
// 		char *c = argv[1];
// 		char *d = argv[2];
// 		char *b = argv[2];
//
// 		printf("%lu\n", ft_strcspn(a,b));
// 		printf("%lu\n", strcspn(c, d));
// 	}
// 	else
// 		printf("Les arguments STP\n" );
// 	return 0;
// }
