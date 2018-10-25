/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tests_strchr.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ccantin <ccantin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/16 15:43:57 by ccantin      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/18 02:32:50 by ccantin     ###    #+. /#+    ###.fr     */
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

	//test = strchr(str, 'f');
	//test_ft = ft_strchr(str, 'f');
	//test = strchr(str, '5'); == NULL; can't printf
	//test_ft = ft_strchr(str, '5'); == NULL; can't printf
	//test = strchr(str, '\0');
	//test_ft = ft_strchr(str, '\0');
	test = strchr(str, ' ');
	test_ft = ft_strchr(str, ' ');


	printf("%p\n", test);
	printf("%p\n", test_ft);

	printf("%c\n", *test);
	printf("%c\n", *test_ft);

	return (0);
}
