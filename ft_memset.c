/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:22:08 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/04 11:30:41 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char   *ptr;

    ptr = (unsigned char *)b;
    while (len > 0)
    {
        *(ptr++) = (unsigned char)c;
        len--;
    }
    return (b);
}

/*int main(void)
{
    char hello[10] = "bon"; 
    printf("%s\n", (char *)memset(hello, 97, 3));
}*/