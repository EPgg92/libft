#include "libft.h"

char *strdup(const char *s1)
{
	return (ft_strcpy(ft_strnew(ft_strlen(s1)),s1));
}


// char	*ft_strdup(char *src)
// {
// 	int		len;
// 	int		i;
// 	int		j;
// 	char	*output;
//
// 	i = 0;
// 	j = 0;
// 	len = ft_strlen(src);
// 	if (!(output = (char*)malloc(1 * len + 1)))
// 		return (output);
// 	while (j < len)
// 		output[j++] = '\0';
// 	while (src[i])
// 	{
// 		output[i] = src[i];
// 		i++;
// 	}
// 	output[i] = '\0';
// 	return (output);
// }
