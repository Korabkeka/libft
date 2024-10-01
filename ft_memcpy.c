/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:52:26 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/01 14:23:36 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t  i;
    char    *ptr;

    ptr = dst;
    i = -1;
    while (++i < n)
        *ptr++ = *(char*)src++;
    return (dst);
}

/*int main(void)
{
    char hello[10] = "bonrobert";
    char bobo[10] = "lolo";
    printf("%s\n", ft_memcpy((void *)hello, (const void *)bobo, 4));
}*/