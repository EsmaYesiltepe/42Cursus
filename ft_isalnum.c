#include "libft.h"

int	ft_isalnum(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return (1);
	else if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}
/*
int main(void)
{
    printf("%d", ft_isalnum('@'));
    return (0);
}
*/
