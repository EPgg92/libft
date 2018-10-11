#include "libft.h"

int ft_atoi(const char *str)
{
	long long nbr;
	long long neg;

	neg = 1;
	nbr = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (ft_isdigit(*str) && *str)
	{
		if(!ft_isdigit(*(str + 1)))
		{
			nbr += *str - '0';
			break;
		}
		nbr = (nbr + *str++ - '0')*10;
	}
	return ((int)nbr * neg);
}

// int		ft_atoi(const char *str)
// {
// 	long long res;
// 	int neg;
//
// 	res = 0;
// 	neg = 0;
// 	while (ft_isspace(*str))
// 		str++;
// 	if (*str == '+' || *str == '-')
// 	{
// 		if (*str == '-')
// 			neg = 1;
// 		str++;
// 	}
// 	while (ft_isdigit(*str))
// 		res = res * 10 + *str++ - '0';
// 	return (neg ? -res : res);
// }
//
// #include "stdio.h"
//
// int main(int argc, char **argv) {
// 	printf("%d\n", atoi(argv[1]));
// 	printf("%d\n", ft_atoi(argv[1]));
// 	return (0);
// }
