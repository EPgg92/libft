/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlen.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:15 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 18:24:15 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


int	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while(*str++ && ++i)
		;
	return (i);
}

// int	ft_strlen(char *str)
// {
// 	return (*str ? ft_strlen(++str) + 1 : 0);
// }

// #include <stdio.h>
//
// int main(int argc, char  **argv) {
//
// 	if (argc == 2)
// 		printf("%d\n", ft_strlen(argv[1]));
// 	return 0;
// }
