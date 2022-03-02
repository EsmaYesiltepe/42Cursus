#include "libft.h"

int	ft_toupper(int c)
{
	if (c <= 'z' && c >= 'a')
		c = c -32;
	return (c);
}
/*
int main(void)
{
    printf("%c", ft_toupper('b'));
    
    return(0);
}
*/
