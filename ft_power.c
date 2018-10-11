long ft_power(long x, unsigned long y)
{
	long temp;

	if(y == 0)
        return 1;
    temp = ft_power(x, y/2);
    if (y%2 == 0)
        return temp*temp;
    else
        return x*temp*temp;
}

// #include <stdlib.h>
// #include <stdio.h>
//
// int main(int argc, char **argv)
// {
// 	printf("%ld\n", ft_power( atoi(argv[1]), atoi(argv[2])));
// }
