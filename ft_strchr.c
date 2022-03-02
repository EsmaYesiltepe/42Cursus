#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;

	a = (char)c;
	while (*s != '\0' && a != *s)
		s++;
	if (a == *s)
		return ((char *)s);
	return (0);
}
/*
int main(void)
{
    char str[] = "esmthgtra";
    char chr = 't';
    char *a = ft_strchr(&str[0] , chr);
    printf("%s", a);
}
*/
