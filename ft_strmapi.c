/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:07:54 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/14 19:48:43 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char            *res;
    unsigned int    i;

    res = (char *)malloc((strlen(s) + 1) * sizeof(char));
    if (!res)
        return (NULL);
    i = 0;
    while (i < strlen(s))
    {
        res[i] = (*f)(i, s[i]);
        i++;
    }
    res[i] = 0;
    return (res);
}
/*static char    modif(unsigned int i, char c)
{
    if(i & 1 && (c >= 'a' && c <= 'z'))
        return ('a');
    return ('b');
}

int main(void)
{
    printf("%s\n", ft_strmapi("hello world", modif));
}*/