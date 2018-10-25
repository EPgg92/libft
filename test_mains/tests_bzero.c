/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bzero.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ccantin <ccantin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 19:54:35 by ccantin      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 20:21:54 by ccantin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include <stdio.h>
#include "../libft.h"

int main()
{
	char	*str;
	size_t		i;
	int len = 4;

	i = 0;
	str = malloc(sizeof(char) * len);
	str = memset(str, 'B', len);
	ft_bzero(str, len);
	while (i < len)
	{
		printf("%c", *str++);
		i++;
	}
	printf("\n");
	printf("BITE\n");
	str = memset(str, 'A', len);
	bzero(str, len);
	i =0;
	while (i < len)
	{
		printf("%c", *str--);
		i++;
	}
	printf("\n");

	//printf("Test SEGFAULT\n");
	str = NULL;
	//ft_bzero(str, len);
	//bzero(str, len);
	printf("%s\n",str );
	return (0);
}
