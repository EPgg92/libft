/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tests_strstr.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ccantin <ccantin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/16 22:19:37 by ccantin      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 15:58:56 by ccantin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main()
{
	/*const char hay[] = "abcdefg\0";
	const char needle[] = "";*/
	/*const char hay[] = "abcdefg\0";
	const char needle[] = "pqrst\0";*/
	/*const char hay[] = "abcdefg";
	const char needle[] = "becd";*/
	const char hay[] = "abcdefg";
	const char needle[] = "bcd";
	char *test;
	char *ft_test;

	ft_test = ft_strstr(hay, "\0");
	test = strstr(hay, "\0");
	printf("%s\n%p\n", test, test);
	printf("%s\n%p\n", ft_test, ft_test);
	return (0);
}
