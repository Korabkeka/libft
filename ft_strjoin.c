/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:08:44 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/10 15:29:14 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strjoin(const char *s1, const char *s2)
{
    int     i;
    int     j;
    char    *str;

    i = 0;
    j = 0;
    str = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if (!str)
        return (NULL);
    while (s1[j])
        str[i++] = s1[j++];
    j = 0;
    while (s2[j])
        str[i++] = s2[j++];
    str[i] = '\0';
    return (str);
}