// to redo
char	*ft_strcat(char *dest, const char *scr)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (scr[j] != '\0')
	{
		dest[i] = scr[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
