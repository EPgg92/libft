/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tests_strnstr.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ccantin <ccantin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 15:52:41 by ccantin      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 16:32:51 by ccantin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main()
{
	const char hay[] = "abcdefg\0";
	 const char needle[] = "";
	// const char hay[] = "abcdefg\0";
	// const char needle[] = "pqrst\0";
	// const char hay[] = "abcdefg";
	// const char needle[] = "becd";
	// const char hay[] = "abcdefg";
	// const char needle[] = "bcd";




	char *test;
	char *ft_test;

	ft_test = ft_strnstr(hay, needle, 3);
	test = strnstr(hay, needle, 3);
	printf("%s\n%p\n", ft_test, ft_test);
	printf("%s\n%p\n", test, test);
	return (0);
}
