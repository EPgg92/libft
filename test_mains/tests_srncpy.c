/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   test_srncpy.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ccantin <ccantin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 18:55:45 by ccantin      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 20:25:43 by ccantin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int main (void)
{
	char *dst;
	const char *src;
	int len;

	len = 18;
	src = "Hello";
	dst = (char *)malloc(sizeof(char) * 2);
	//src = ""; /*pas d'erreur*/
	//src = NULL; /*Seg fault*/
	//dst = ""; /*Cree bus error*/
	//dst = NULL; /*Cree un seg fault*/
	ft_strncpy(dst, src, len);
	//strncpy(dst, src, len);
	printf("src : %s\ndst : %s\n", src, dst);
	return (0);
}
