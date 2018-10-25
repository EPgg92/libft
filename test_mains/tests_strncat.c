

#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	char	*orig;
	const char	*append;

	orig = (char *)malloc(sizeof(char) * 20);
	append = "Hello";
	orig[0] = 'B';
	orig[1] = 'o';
	orig[2] = 'n';
	orig[3] = '\0';
	ft_strncat(orig, append, 4);
	//strncat(orig, append, 4);
	printf("la concat de Bon et les 4 premieres lettres");
	printf(" de Hello est : %s\n", orig);
	return (0);
}
