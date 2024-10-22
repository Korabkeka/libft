/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:48:27 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/23 01:05:23 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	_c;
	char	*last;

	_c = (char)c;
	i = 0;
	last = NULL;
	while (s[i])
	{
		if (s[i] == _c)
			last = (char *)&(s[i]);
		i++;
	}
	if (s[i] == _c)
		last = ((char *)&(s[i]));
	return (last);
}
