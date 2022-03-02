#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = (void *)malloc(count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}
/*
int main(void)
{
    printf("%s" , ft_calloc(0,0));
    return(0);
}
*/
