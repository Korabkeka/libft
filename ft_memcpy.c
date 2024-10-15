/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:52:26 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/15 15:14:15 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char    *pdst;
	unsigned char    *psrc;

	if(dst == (void *)0 && src == (void *)0)
		return (dst);
	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	while (n > 0)
	{
		*(pdst++) = *(psrc++);
		n--;
	}
	return (dst);
}
/*int main(void)
{
	char hello[10] = "bonrobert";
	char bobo[10] = "lolo";
	printf("%s\n", (char *)ft_memcpy(hello, bobo, 4));
}*/