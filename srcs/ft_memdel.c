// #include "libft.h" // to keep
#include <stdlib.h> // to remove

void ft_memdel(void **ap)
{
	if (ap)
		free(*ap);
	*ap = NULL;
}
