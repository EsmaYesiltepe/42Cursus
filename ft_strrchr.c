#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = NULL;
	while (*s)
	{
		if (*s == ((unsigned char) c))
			p = (char *)s;
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (p);
}
/*
int main(void)
{
    char str[] = "esmthgtratgufyfu";
    char chr = 't';
    printf("%s",ft_strrchr(&str[0] , chr));
}

 
*/
