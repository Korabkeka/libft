/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:22:08 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/01 12:42:02 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    *ft_memset(void *b, int c, size_t len)
{
    size_t  i;
    unsigned char   *ptr;

    ptr = b;
    i = -1;
    while (++i < len)
        *ptr++ = (unsigned char)c;
    return (b);
}
/*
int main(void)
{
    char hello[10] = "bon"; 
    printf("%s\n", memset((void *)hello, 97, 3));
}*/