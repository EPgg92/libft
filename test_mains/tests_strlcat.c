/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tests_strlcat.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ccantin <ccantin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 22:47:08 by ccantin      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/16 17:04:48 by ccantin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char		*dst;
	//const char	src[] = "Test\0";
	size_t		len;

	dst = (char *)malloc(sizeof(char) * 150);
	printf("%p\n", dst);
	dst[0] = 'a';
	dst[1] = 'b';
	dst[2] = 'c';
	dst[3] = 'd';
	dst[4] = 'e';
	dst[5] = 'f';
	dst[6] = 'g';
	dst[7] = 'h';
	printf("%p\n", dst);
	len = strlcat(dst, "abc", 5);
	//len = ft_strlcat(dst, "abc", 12);
	printf("La concat : %s\nLa taille totale de dst : %zu\n", dst, len);
	return (0);
}
