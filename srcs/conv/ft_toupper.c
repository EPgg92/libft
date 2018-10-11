#include "libft.h"

int ft_toupper(int c)
{
	return((ft_islower(c)) ? c - ' ' : c);
}


char ft_ctoupper(char c)
{
	return((ft_islower(c)) ? c - ' ' : c);
}
