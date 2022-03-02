#include "libft.h"

size_t	ft_strlen(const char *b)
{
	size_t	say;

	say = 0;
	while (*b != '\0')
	{
		say++;
		b++;
	}
	return (say);
}
/*
int main(void)
{
    char a[] = "esmaasdfgh";
    printf("%d", ft_strlen(&a[0]));
    return(0);
}
*/
