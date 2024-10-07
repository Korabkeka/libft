/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:21:48 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/07 14:42:24 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t          i;
    unsigned char   *ptr;

    i = 0;
    ptr = (unsigned char *)s;
    while (n--)
    {
        if ( ptr[i] == (unsigned char)c)
            return ((void *)&ptr[i]);
        i++;
    }
    return (NULL);
}

/*int main(void)
{
    char s[] = "hello world";
    printf("%s\n", ft_memchr(s, 'o', 8));
}*/