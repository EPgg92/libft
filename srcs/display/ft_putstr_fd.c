#include "libft.h"

void ft_putstr_fd(char* str, int fd)
{
	if (str)
		while (*str)
			ft_putchar_fd(*str++, fd);
}
