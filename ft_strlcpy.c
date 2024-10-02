/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:11:25 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/02 14:37:50 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t   ft_strlen(const char *src)
{
    size_t i;

    i = 0;
    while(src[i])
        i++;
    return (i);
}

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;

    i = 0;
    while (i++ < size)
    {
        dst[i] = (char)src[i];
    }
    dst[i] = '\0';
    return (ft_strlen(src));
}

int main()
{
    char		dest[10];
	const char	src[6] = "hello";

	ft_strlcpy(dest, src, 5);
	printf("%s\n", dest);
}