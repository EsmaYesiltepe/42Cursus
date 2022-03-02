#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (lst && f)
	{
		while (lst != NULL)
		{
			tmp = lst->next;
			f(lst->content);
			lst = tmp;
		}
	}
}
