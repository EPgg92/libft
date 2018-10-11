/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_isascii.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 18:24:05 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 18:24:05 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


int ft_isascii(int c)
{
	return (c >= '\0' && c <= 127);
}
