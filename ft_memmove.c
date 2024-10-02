/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:46:16 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/02 12:57:37 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char *_dest;
    char *_src;

    _dest = (char *)dest;
    _src = (char *)src;
	if(_dest == _src)
		return (dest);
    if (_dest < _src)
    {
        while (--n)
			*_dest++ = *_src++;
    }
	else
	{
		_dest += n;
		_src += n;
		while (--n)
			*_dest-- = *_src--;
	}
	return (dest);
}

/*int main(void)
{
	char	s1[10] = "bonjour";
	char	s2[10] = "hello";

	ft_memmove((void *)s1, (void *)s2, 5);
	printf("%s\n", s1);
}*/