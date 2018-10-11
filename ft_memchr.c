/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:08 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 18:24:08 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
		if (*(unsigned char*)s++ == (unsigned char)c)
			return ((unsigned char*)s - 1);
	return (NULL);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char **argv)
// {
// 	if (argc == 5)
// 	{
// 		printf("%s\n", memchr(argv[1], atoi(argv[3]), atoi(argv[4])));
// 		printf("%s\n", ft_memchr(argv[2], atoi(argv[3]), atoi(argv[4])));
// 	}
// 	else
// 		printf("LOL les arguements\n");
// 	return 0;
// }
