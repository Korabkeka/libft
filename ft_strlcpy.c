/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:11:25 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/15 15:15:26 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t slen;

    slen = ft_strlen(src);
    if (size > slen + 1)
		ft_memcpy(dst, src, slen + 1);
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (slen);
}
/*int main()
{
    char		dest[10];
	const char	src[6] = "hello";

	ft_strlcpy(dest, src, 6);
	printf("%s\n", dest);
}*/