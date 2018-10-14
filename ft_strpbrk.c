/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strpbrk.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: exam <marvin@le-101.fr>                    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 10:53:51 by exam         #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 11:29:52 by exam        ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

// #include <string.h>
//
// char *ft_strchr(const char *str, int c)
// {
// 	while (*str)
// 		if (*str++ == (char)c)
// 			return ((char *)str - 1);
// 	return (NULL);
// }

#include "libft.h"

char *ft_strpbrk(const char *s1, const char *s2)
{
	char c;

	while (*s1)
		if (ft_strchr(s2, *s1++))
			return ((char *)(--s1));
	return (NULL);
}

// #include <stdio.h>
//
// int main(int argc, char **argv) {
//
// 	if (argc == 3)
// 	{
// 		char *a = argv[1];
// 		char *c = argv[1];
// 		char *d = "\0";
// 		char *b = "\0";
//
// 		printf("%s\n", ft_strpbrk(a,b));
// 		printf("%s\n", strpbrk(c, d));
// 	}
// 	else
// 		printf("Les arguments STP\n" );
// 	return 0;
// }
