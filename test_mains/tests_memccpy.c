/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tests_memccpy.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ccantin <ccantin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/19 23:20:06 by ccantin      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/20 02:08:36 by ccantin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int main()
{
	int	i;
	const char	src[] = {'a','b', 'c', 'd'};
	char	*dst;
	char	*dst2;
	i = 0;
	dst = malloc(sizeof(char) * 100);
	dst2 = malloc(sizeof(char) * 100);
	while (i < 10)
	{
		dst[i] = 0;
		dst2[i++] = 0;
	}
	i = 0;
	/*memccpy(dst, src, 'e', 5);
	while (i < 5)
		printf("%c\n", dst[i++]);
	i = 0;*/
	memccpy(dst, src, 'e', 2);
	while (i < 9)
		printf("%c\n", dst[i++]);
	ft_memccpy(dst2, src, 'e', 2);
	i = 0;
	while (i < 9)
		printf("%c\n", dst2[i++]);
	return (0);
}
