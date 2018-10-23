/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bzero.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:04 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 18:40:37 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
void	ft_bzero(void *b, size_t len)
=======
void	*ft_bzero(void *b, size_t n) // ne prend pas un pointerurs sur fonction
>>>>>>> 4160f974ffba0bfa33a215d4ea544c1f85bef2db
{
	unsigned char *s;

	s = (unsigned char *)b;
	while (len)
		s[--len] = 0;
}
