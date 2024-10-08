/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:23:03 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/08 12:39:23 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//size_t ft_strlen(const char *s);

char    *ft_strdup(const char *s)
{
    size_t  i;
    size_t  srclen;
    char    *dup;

    i = 0;
    srclen = strlen(s);
    dup = malloc(srclen + 1);
    if(!dup)
        return (NULL);
    while (s[i])
    {
        dup[i] = (char)s[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

/*int main(void)
{
    printf("%i\n", (int)ft_strdup("hello world")[12]);
}*/