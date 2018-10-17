#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list	*(*f)(t_list *elem))
{
	t_list  *ret;
	t_list  *tmp;

	if (!lst)
		return (NULL);
	ret = f(lst);
	tmp = ret;
	while (lst->next)
	{
		lst = lst->next;
		if (!(tmp->next = f(lst)))
			return (NULL);
		tmp = tmp->next;
	}
	return (ret);
}
