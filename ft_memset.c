#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t count)
{
	size_t	a;

	a = 0;
	while (a < count)
	{
		((unsigned char *)dest)[a] = ch;
		a++;
	}
	return (dest);
}
