#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int main(void)
{
	t_list *a = NULL;
	ft_lstadd_front(&a, ft_lstnew((void *)13));
	ft_lstadd_front(&a, ft_lstnew((void *)56));
	printf("%d" , ft_lstlast(a)->content);
	return(0);
}
*/
