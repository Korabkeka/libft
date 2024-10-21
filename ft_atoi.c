/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:42:49 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/20 10:57:30 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	multiplier;
	int	result;

	i = 0;
	multiplier = 1;
	result = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+' && nptr[i + 1] != '-')
        i++;
	if(nptr[i] == '-')
	{
		multiplier = -1;
		i++;
	}
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