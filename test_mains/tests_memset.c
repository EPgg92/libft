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


#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"


void isok(int i)
{
	if (i)
		printf( "[OK] "  );
	else
		printf( "[FAIL] "  );
}

int main()
{
	char	*str;
	char	*str2;
	size_t		i;
	int len = 4;

	i = 0;
	str = malloc(sizeof(char) * len);
	str2 = malloc(sizeof(char) * len);
	str = ft_memset(str, 'A', len);
	while (i < len)
	{
		printf("%c", *str++);
		i++;
	}
	printf("\n");
	printf("BITE\n");
	str2 = memset(str2, 'A', len);
	i =0;
	while (i < len)
	{
		printf("%c", *str2++);
		i++;
	}
	printf("\n");
	isok(ft_strnequ(str-len, str2-len, len));
	printf("\n");
	return (0);
}
