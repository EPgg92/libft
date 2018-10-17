/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putchar_fd.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:10 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/17 02:47:52 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	unsigned char chr[2];

	if (c >= 0)
		write(fd, &c, 1);
	else if (c >= -64)
	{
		chr[0] = 195;
		chr[1] = c + 192;
		write(fd, chr, 2);
	}
	else if (c < -64)
	{
		chr[0] = 194;
		chr[1] = c + 256;
		write(fd, chr, 2);
	}
}
