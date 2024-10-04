/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:03:49 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/04 11:10:57 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlen(const char *s)
{
    size_t  i;

    i = -1;
    while(s[++i]);
    return (i);
}

int main(void)
{
    char aaa[] = "hello";
    printf("%li", ft_strlen(aaa));
}