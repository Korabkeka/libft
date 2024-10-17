/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:39:22 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/17 10:56:52 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
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