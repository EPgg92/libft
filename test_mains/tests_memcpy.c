/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tests_memcpy.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ccantin <ccantin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/19 22:25:28 by ccantin      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/19 22:41:13 by ccantin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int main ()
{
	int *dst;
	int *dst2;
	int i;
	int src[] = {256,256,256};
	i = 0;
	dst = malloc(sizeof(int) * 100);
	dst2 = malloc(sizeof(int) * 100);
	while (i < 10)
	{
		dst[i] = 0;
		dst2[i++] = 0;
	}
	i = 0;
	dst = memcpy(dst, src, 2);
	while (i < 3)
		printf("%d\n", dst[i++]);
	dst2 = ft_memcpy(dst2, src, 2);
	i = 0;
	while (i < 3)
		printf("%d\n", dst2[i++]);
	return (0);
}
