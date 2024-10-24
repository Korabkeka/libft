/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:46:16 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/23 01:11:07 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*_dest;
	unsigned char	*_src;

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
		_dest += n - 1;
		_src += n - 1;
		while (n--)
			*(_dest--) = *(_src--);
	}
	return (dest);
}
