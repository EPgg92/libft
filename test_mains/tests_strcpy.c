/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tests_strcpy.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ccantin <ccantin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 23:50:26 by ccantin      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 20:18:52 by ccantin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"
int	main(void)
{
	char	*src;
	char	*dst;

	src = "Hello";
	//src = ""; /*pas d'erreur*/
	//src = NULL; /*Seg fault*/

	//dst = (char *)malloc(sizeof(char) * 20);
	dst = ""; /*Cree un bus error*/
	//dst = NULL /*Cree unn seg fault*/

	strcpy(dst, src);
	//ft_strcpy(dst, src);
	printf("src : %s\ndst : %s\n", src, dst);
	return (0);
}
