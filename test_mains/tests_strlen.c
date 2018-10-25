/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   test_strlen.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ccantin <ccantin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/05 21:16:44 by ccantin      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/18 02:35:46 by ccantin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char *str;

	str = NULL;
	printf("Taille de la chaine NULL : %zu\n", ft_strlen(str));
	return (0);
}
