/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tests_strrchr.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ccantin <ccantin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/16 16:04:10 by ccantin      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/16 16:40:10 by ccantin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int main()
{
	char *test;
	char *test_ft;
	const	char str[] = "abcdefg\0";

	//test = strrchr(str, 'a');
	//test_ft = ft_strrchr(str, 'a');
	//test = strrchr(str, '5'); //== NULL; can't printf
	//test_ft = ft_strrchr(str, '5'); //== NULL; can't printf
	test = strrchr(str, '\0');
	test_ft = ft_strrchr(str, '\0');


	printf("%p\n", test); // same pointer as str
	printf("%p\n", test_ft); // same pointer as str
	printf("%p\n", str);
	printf("%c\n", *test);
	printf("%c\n", *test_ft);

	return (0);
}
