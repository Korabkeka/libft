/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:52:26 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/23 01:03:15 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*_dst;
	unsigned char	*_src;

	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	_dst = (unsigned char *)dst;
	_src = (unsigned char *)src;
	while (n > 0)
	{
		*(_dst++) = *(_src++);
		n--;
	}
	return (dst);
}
