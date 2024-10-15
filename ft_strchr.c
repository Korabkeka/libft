/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:06:01 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/15 15:14:59 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	_c;

	_c = (char)c;
	i = 0;
	while(s[i])
	{
		if(s[i] == _c)
			return ((char *)&(s[i]));
		i++;
	}
	if (s[i] == _c)
		return ((char *)&(s[i]));
	return ((void *)0);
}
/*int	main(void)
{
	char s[] = "hello world";
	printf("%c\n", (size_t)ft_strchr(s, 'u'));
}*/