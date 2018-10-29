
char *ft_T(const char *str)
{
	*(char *)str = 'T';
	return ((char *)str);
}


#include <stdio.h>
#include <string.h>

int main()
{
	const char *tab = "test";
	int a = strlen(tab)+10;
	while (a--) {
		printf("%s\n", tab++);
	}
	return 0;
}
