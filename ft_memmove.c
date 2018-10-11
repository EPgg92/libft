/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:09 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 18:24:09 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char *cdst;
	unsigned char *csrc;

	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	if (csrc < cdst)
	{
		cdst += n - 1;
		csrc += n - 1;
		while (n--)
			*cdst-- = *csrc--;
	}
	else
		while (n--)
			*cdst++ = *csrc++;
	return (dst);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(int argc, char **argv)
// {
// 	if (argc == 4)
// 	{
// 		printf("%s test\n", ft_memmove(argv[1]+4, argv[1]+8, atoi(argv[3])));
// 		printf("%s gold\n", memmove(argv[2]+4, argv[2]+8, atoi(argv[3])));
// 	}
// 	else
// 		printf("Lol les arguments!!\n");
// 	return 0;
// }
