#include "libft.h"

char		*ft_strtrimcharset(char const *s, char const *charset)
{
	char	*str;
	int		len;

	if (!s)
		return (NULL);
	while (ft_isincharset(*s , charset) && *s)
		s++;
	if (*s == '\0')
		return (ft_strnew(1));
	len = ft_strlen(s);
	s += len - 1;
	while (ft_isincharset(*s , charset) && len--)
		s--;
	if ((str = ft_strnew(len)) == NULL)
		return (NULL);
	s -= len - 1;
	ft_strncpy(str, s, len);
	return (str);
}
