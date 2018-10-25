/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tests_strcat.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ccantin <ccantin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 21:06:46 by ccantin      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/08 22:11:47 by ccantin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	*orig;
	const char	*append;

	orig = (char *)malloc(sizeof(char));
	orig[0] = 'B';
	orig[1] = 'o';
	orig[2] = 'n';
	orig[3] = '\0';
	append = "Hello\0";
	ft_strcat(orig, append);
	//strcat(orig, append);
	printf("La cat de Bon et Hello : %s\n", orig);
	return (0);
}
