/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:22:29 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/04 13:06:11 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t  strlcat(char *dst, const char *src, size_t size)
{
	size_t  dlen;
	size_t  slen;

	dlen = strlen(dst);
	slen = strlen(src);
	if (dlen >= size)
		return (dlen + slen);
	if (size - dlen > slen)
	{
		memcpy(dst + dlen, src, slen + 1);
	}
	else
	{
		memcpy(dst + dlen, src, size - dlen - 1);
		dst[size - 1] = '\0';
	}
	return (dlen + slen);
}

/*int main(void)
{
	char s1[15] = "hello ";
	const char s2[] = "world";
	strlcat(s1, s2, 9);
	printf("%s\n", s1);
}*/