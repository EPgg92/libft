
int ft_isincharset(char c, char const *charset)
{
	while (*charset)
		if (c == *charset++)
			return (1);
	return (0);
}
