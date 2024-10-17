/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:42:49 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/17 10:15:46 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	multiplier;
	int	result;

	i = 0;
	multiplier = 1;
	result = 0;
	while (nptr[i++])
	{
		if (nptr[i] == '+')
			break ;
		if (nptr[i] == '-')
		{
			multiplier = -1;
			break ;
		}
	}
	i++;
	while (nptr[i] && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		result *= 10;
		result += nptr[i] - '0';
		i++;
	}
	return (result * multiplier);
}
/*int main(void)
{
	printf("%i\n", ft_atoi("   +123aze"));
}*/