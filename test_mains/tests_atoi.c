#include "../libft.h"
#include <stdio.h>


void isok(int i)
{
	if (i)
		printf( "[OK] "  );
	else
		printf( "[FAIL] "  );
}

void ft_test_atoi()
{
	int test_atoi = 1;
	int i = 0;
	char *tab[] = {"5", "8", "-5", "7", "3", "2", "10", "1", "2147483647", "-2147483648", "         \t  \n8976\t54", "  qwertyu", "qqqqqqqq","", NULL};
	char *s;

	while (tab[i])
	{
		s = tab[i];
		test_atoi *= (atoi(s) == ft_atoi(s));
		i++;
		isok(test_atoi);
	}
	printf("\n");
	//isok(atoi(NULL));
	//isok(ft_atoi(NULL));
	printf("\n");
	return ;
}



int main()
{
	ft_test_atoi();
	return (0);
}
