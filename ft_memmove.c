/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:46:16 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/17 10:44:19 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*_dest;
	unsigned char	*_src;

	if (dest == (void *)0 && src == (void *)0)
		return ((void *)0);
	_dest = (unsigned char *)dest;
	_src = (unsigned char *)src;
	if (_dest == _src)
		return (dest);
	if (_dest < _src)
	{
		while (n--)
			*(_dest++) = *(_src++);
	}
	else
	{
		_dest += n;
		_src += n;
		while (n--)
			*(_dest--) = *(_src--);
	}
	return (dest);
}
/*int main(void)
{
	char	s1[10] = "bonjour";
	char	s2[10] = "helld";

	ft_memmove((void *)s1, (void *)s2, 5);
	printf("%s\n", s1);
}*/
