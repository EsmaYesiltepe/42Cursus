#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	a;

	a = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		a++;
	}
	return (a);
}
/*
int main(void)
{
	t_list *l = NULL;
	ft_lstadd_front(&l, ft_lstnew((void*)2));
	ft_lstadd_front(&l, ft_lstnew((void*)3));
	printf("%d" , ft_lstsize(l));
	
	
	
}
*/
