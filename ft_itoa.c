/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:00:10 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/17 10:36:35 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_n_len(long n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		count++;
		n *= -1;
	}
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*res;
	int		len;
	long	nbr;

	nbr = n;
	len = calc_n_len(nbr);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = len - 1;
	if (nbr < 0)
	{
		nbr *= -1;
		res[0] = '-';
	}
	if (nbr == 0)
		res[0] = 0 + '0';
	while (nbr)
	{
		res[i--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	res[len] = 0;
	return (res);
}
/*int main(void)
{
	printf("%s\n", ft_itoa(452367850));
}*/