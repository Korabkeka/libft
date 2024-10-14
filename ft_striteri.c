/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:39:22 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/14 19:48:30 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i;

    i = 0;
    while (i < strlen(s))
    {
        (*f)(i, &s[i]);
        i++;
    }
}
/*static void modif(unsigned int i, char *c)
{
    if(i & 1)
        *c = 'a';
}

int main(void)
{
    char    s[] = "hello world";
    ft_striteri(s, modif);
    printf("%s\n", s);
}*/