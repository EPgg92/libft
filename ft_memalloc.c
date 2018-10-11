/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memalloc.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:07 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 18:24:07 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void *ft_memalloc(size_t size)
{
	unsigned char *m;

	if (!(m = (unsigned char*)malloc(sizeof(unsigned char) * size)))
		return (NULL);
	ft_bzero(m, size * sizeof(unsigned char));
	return (m);
}

// #include <stdio.h>
// int main()
// {
// 	int i = 6;
//
// 	char *a = (char*)ft_memalloc(i);
// 	while (i--)
// 		printf("%d\n", a[i]==0);
// }
