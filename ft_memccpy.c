/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:07 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 18:24:07 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *cdst;
	unsigned char *csrc;

	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	while (n--)
		if ((*cdst++ = *csrc++) == (unsigned char)c)
			return (cdst);
	return (NULL);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char **argv)
// {
// 	if (argc == 5)
// 	{
// 		char *a = memccpy(argv[1], argv[2], atoi(argv[3]), atoi(argv[4]));
// 		printf("%s gold1\n", a);
//
// 		char *b = ft_memccpy(argv[1], argv[2], atoi(argv[3]), atoi(argv[4]));
// 		printf("%s test1\n", b);
// 	}
// 	else
// 		printf("Lol les arguments!!\n");
// 	return 0;
// }
