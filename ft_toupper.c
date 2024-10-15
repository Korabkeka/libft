/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:11:02 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/15 15:16:31 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}

int ft_toupper(int c)
{
    int diff;

    if (ft_isalpha(c))
    {
        diff = 'a' - 'A';
        if (ft_islower(c))
        	return (c - diff);
    }
	return (c);
}
/*int main(void)
{
	printf("%c\n", ft_toupper('d'));
}*/