/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:11:34 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/07 14:19:06 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    while ((s1[i] && s2[i]) && i < n)
    {
        if ((unsigned char)s1[i] > (unsigned char)s2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        if ((unsigned char)s1[i] < (unsigned char)s2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
    }
    return (0);
}