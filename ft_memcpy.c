/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:08 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 18:24:08 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *mem;

	mem = (unsigned char *)dst;
	while (n--)
		*mem++ = *(unsigned char *)src++;
	return (dst);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char **argv)
// {
// 	if (argc == 4)
// 	{
// 		char *a = memcpy(argv[1] ,argv[2] , atoi(argv[3]));
// 		char *b = ft_memcpy(argv[1] ,argv[2] , atoi(argv[3]));
// 		printf("%s\n", a);
// 		printf("%s\n", b);
// 	}
// 	else
// 	printf("lol les arguments\n" );
// }
