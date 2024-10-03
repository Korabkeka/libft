/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:31:30 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/01 13:47:52 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char *ptr;

	i = -1;
	ptr = s;
	while (++i < n)
		*ptr++ = 0;	
}
/*
int main(void)
{
	char hello[10] = "hello";

	ft_bzero((void *)hello, 5);
	printf("%i\n", (int)hello[0]);
}*/