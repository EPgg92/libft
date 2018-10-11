void ft_striter(char *s, void (*f)(char *))
{
	if (f && s)
		while (*s)
			f(s++);
}
