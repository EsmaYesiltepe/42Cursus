#include "libft.h"

int	ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
		c = c +32;
	return (c);
}
/*
int main(void)
{
    printf("%c", ft_tolower('B'));
    
    return(0);
}
*/
