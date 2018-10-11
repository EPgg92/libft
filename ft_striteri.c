void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int i;

	i = 0;
	if (f && s)
		while (*s)
			f(i++,s++);
}
