/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:00:33 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/04 14:04:19 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

static int	ft_isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}

int	ft_tolower(int c)
{
    int diff;

    if (isalpha(c))
    {
		diff = 'a' - 'A';
		if (ft_isupper(c))
			return (c + diff);
	}
	return (c);
}

/*int main(void)
{
	printf("%c\n", ft_tolower('4'));
}*/