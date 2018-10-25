/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   test_strdup.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ccantin <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/05 23:06:15 by ccantin      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/05 23:48:02 by ccantin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char *src;
	char *dest;

	src = "Hello\0";
	dest = ft_strdup(src);
	printf("La chaine : '%s' a ete dupliquee en : '%s'\n", src, dest);
	return (0);
}
