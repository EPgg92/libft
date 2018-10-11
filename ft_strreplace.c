char *ft_strreplace(char *dst, char chr, char repl_chr)
{
	char *s;

	s = dst;
	while(*s)
	{
		if(*s == chr)
			*s = repl_chr;
		s++;
	}
	return (dst);
}

// #include <stdio.h>
//
// int main(int argc, char  **argv)
// {
// 	if (argc == 4)
// 	{
// 		printf("%s\n", ft_strreplace(argv[1], argv[2][0], argv[3][0]));
// 		printf("%ld\n", argv[1] - (char *)NULL );
// 		printf("%ld\n", (char *)NULL - argv[1]);
// 	}
// 	return 0;
// }
