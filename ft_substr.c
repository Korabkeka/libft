/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:42:12 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/15 15:16:19 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t  i;
	char    *sub;

	i = 0;
	while (s[i + start] && i < len)
		i++;
	sub = malloc(i + 1);
	if(!sub)
		return (NULL);
	i = 0;
	while (s[i + start] && i < len)
	{
		sub[i] = (char)s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*int main(void)
{
	printf("%s\n", ft_substr("hello world", 8, 12));
}*/