#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t	i;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	if (s1 && s2)
	{
		while (i < n)
		{
			if (*str1 == *str2)
			{
				str1++;
				str2++;
			}
			else
				return (*str1 - *str2);
			i++;
		}
	}
	return (0);
}
/*
int main(void)
{
    char str1[] = "esma";
    char str2[] = "esma";
    printf("%d",ft_memcmp(&str1[0], &str2[0] , 3));
    return(0);
}
*/
