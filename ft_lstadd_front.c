#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int main(void)
{
	t_list *a = NULL;
	ft_lstadd_front(&a,ft_lstnew((void*)12));
	
	printf("%d" , a->content);
	return(0);
}
*/
