/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:31:30 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/04 11:24:55 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char *ptr;

	ptr = (char *)s;
	while (n > 0)
	{
		*(ptr++) = 0;
		n--;
	}
}

/*int main(void)
{
	char hello[10] = "hello";
	int i = 0;

	ft_bzero(hello, 4);
	while (i < 10)
	{
		if (hello[i] == 0)
			printf("empty\n");
		else
			printf("%c\n", hello[i]);
		i++;
	}
	printf("%s\n", hello);
}*/