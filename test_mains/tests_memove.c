/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   tests_memove.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ccantin <ccantin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/20 02:33:12 by ccantin      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/23 23:57:38 by ccantin     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int    main()
{
    char    *dst;
    char    src[] = {'1','2','3','4','5','6','7'};
    char    src2[] = {'a', 'b','\0','a','\0'};
    char    src3[] = {'\0', 'a', 'b'};
    char    src4[] = {(char)178, 97, 95, '\0'};
    char    src5[] = {(char)5475};
    char    *dst1;
    dst = malloc(sizeof(char) * 10);
    dst1 = malloc(sizeof(char) * 10);
    printf("%p\n", dst);
    printf("%ld\n", dst1 - dst);
            /*TEST 1 */
    memmove(dst, src, 2);
    ft_memmove(dst1, src, 2);
    printf("test 1 :\nstd : %s\nMine : %s\n", dst, dst1);
    printf("dst :%p\ndst1 :%p\n", dst, dst1);
            /*TEST 2 */
    memmove(dst, src2, 5);
    ft_memmove(dst1, src2, 5);
    printf("test 2 :\n std : %s\nMine : %s\n", dst, dst1);
    printf("dst : %p\ndst1  : %p\n", dst, dst1);
            /*TEST 3 */
    memmove(dst, src3, 10);
    ft_memmove(dst1, src3, 10);
    printf("test 3 :\n std : %d\nMine :%d\n", dst[2], dst1[2]);
    printf("dst : %p\ndst1 : %p\n", dst, dst1);
            /*TEST 4 */
    memmove(dst, src4, 3);
    ft_memmove(dst1, src4, 3);
    printf("test 4 :\n std : %d\nMine :%d\n", dst[0], dst1[0]);
    printf("dst : %p\ndst1 : %p\n", dst, dst1);
            /*TEST 5 */
    memmove(dst, src3, 5);
    ft_memmove(dst1, src3, 5);
    printf("test 5 :\n std : %s\nMine :%s\n", dst, dst1);
    printf("dst :%p\n, dst1  :%p\n", dst, dst1);
            /*TEST 6 */
    memmove(dst, src5, 2);
    ft_memmove(dst1, src5, 2);
    printf("test 6 :\n std : %s\nMine :%s\n", dst, dst1);
    printf("dst :%p\n, dst1  :%p\n", dst, dst1);
            /*TEST 7 */
    memmove(dst, src, 0);
    ft_memmove(dst1, src, 0);
    printf("test 7 :\n std : %s\nMine :%s\n", dst, dst1);
    printf("dst :%p\n, dst1  :%p\n", dst, dst1);
            /*TEST 8 */
    memmove(dst, src, 100);
    ft_memmove(dst1, src, 100);
    printf("test 8 :\n std : %s\nMine :%s\n", dst, dst1);
    printf("dst :%p\n, dst1  :%p\n", dst, dst1);
            /*TEST 9*/
    memmove(dst, src, 25);
    ft_memmove(dst1, src, 25);
    printf("test 9 :\n std : %s\nMine :%s\n", dst, dst1);
    printf("dst :%p\n, dst1  :%p\n", dst, dst1);

    return (0);
}
