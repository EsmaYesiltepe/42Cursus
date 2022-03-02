#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*cnt;

	cnt = (t_list *)malloc(sizeof(t_list));
	if (!cnt)
		return (NULL);
	cnt->content = (void *)content;
	cnt->next = NULL;
	return (cnt);
}
/*
int main(void)
{
	t_list *a = ft_lstnew((void*)12);
	printf("%d",*a);
	return(0);
}
*/
