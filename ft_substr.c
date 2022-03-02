#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	j;

	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	new = (char *)malloc(len + 1 * sizeof(char));
	if (!s || !new)
		return (NULL);
	j = 0;
	while (j < len)
		new[j++] = s[start++];
	new[j] = '\0';
	return (new);
}
/*
int main(void)
{
	char const a[] = "esmanur";
	unsigned int r = 2;
	size_t b = 4;
	printf("%s",ft_substr(&a[0] , r ,b));
	
}
*/