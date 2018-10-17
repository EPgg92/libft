#include "libft.h"

t_list *ft_lstnew(void const *content, size_t content_size)
{
	t_list *l;

	if (!(l = (t_list *)ft_memalloc(sizeof(*l))))
		return (NULL);
	if (!content)
	{
		l->content = NULL;
		l->content_size = 0;
	}
	else
	{
		if (!(l->content = ft_memalloc(content_size)))
			return (NULL);
		ft_memcpy(l->content, content, content_size);
		l->content_size = content_size;
	}
	l->next = NULL;
	return (l);
}
