#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || !fd)
		return ;
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
}
/*
int main(void)
{
	char *s = "aesma";
	ft_putstr_fd(s,2);
	return(0);
}
*/
