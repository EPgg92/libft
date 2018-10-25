/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tests_strcmp.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ccantin <ccantin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/17 17:26:20 by ccantin      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 18:50:13 by ccantin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

int	main()
{
	/*const char s1[] = "abdce123";
	const char s2[] = "abdce123";*/
	/*const char s1[] = "123456789";
	const char s2[] = "213456789";*/
	/*const char s1[7] = {(char)129, (char)154, 'g', (char)7854, 'a', 'b', '\0'};
	const char s2[7] = {(char)129, (char)154, 'g', (char)7854, 'a', 'b', '\0'};*/
	/*const char s1[7] = {(char)129, (char)154, 'g', (char)7854, 'a', 'b', '\0'};
	const char s2[7] = {(char)128, (char)154, 'g', (char)7854, 'a', 'b', '\0'};*/
	const char s1[7] = {(char)129, (char)154, 'g', (char)7854, 'a', 'b', '\0'};
	const char s2[7] = {(char)129, (char)154, 'c', (char)7854, 'a', 'b', '\0'};
	int test;
	int test_ft;

	test = strcmp(s1, s2);
	test_ft = ft_strcmp(s1, s2);
	printf("std : %d\nmine : %d\n", test, test_ft);

	return (0);
}
