#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	number;

	sign = 1;
	number = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	while (ft_isdigit(*str) == 1)
	{
		number = (*str - '0') + (number * 10);
		str++;
	}
	return (number * sign);
}

/*
int main(void)
{
	const char str[] = "+42";
	printf("%d" , ft_atoi(&str[0]));

}
*/
