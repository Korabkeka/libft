/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:06:01 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/04 14:28:14 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strchr(const char *s, int c)
{
	int		i;
	char	*cptr;
	char	_c;

	_c = (char)c;
	cptr = (void *)0;
	i = 0;
	while(s[i])
	{
		if(s[i] == _c)
			return ((char *)&(s[i]));
		i++;
	}
	if (s[i] == _c)
		return ((char *)&(s[i]));
	return (cptr);
}

/*int	main(void)
{
	char s[] = "hello world";
	printf("%c\n", (size_t)ft_strchr(s, 'u'));
}*/