/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyesilte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:56:14 by eyesilte          #+#    #+#             */
/*   Updated: 2022/03/02 18:01:04 by eyesilte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	numcount(long a)
{
	int	i;

	i = 0;
	if (a == 0)
		return (1);
	if (a < 0)
		i++;
	while (a != 0)
	{
		a = a / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	nc;
	char	*mal;
	long	ln;

	ln = n;
	nc = numcount(ln);
	mal = (char *)malloc((nc + 1) * sizeof(char));
	mal[nc--] = '\0';
	if (ln < 0)
	{
		mal[0] = '-';
		ln *= -1;
	}
	if (ln == 0)
	{
		mal[0] = '0';
		return (mal);
	}
	while (ln > 0)
	{
		mal[nc] = 48 + (ln % 10);
		nc--;
		ln = ln / 10;
	}
	return (mal);
}
/*
int main(void)
{
    int a = -648;
    printf("%s" , ft_itoa(a));
}
*/
