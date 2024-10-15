/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:13:48 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/15 11:53:01 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void    *ft_calloc(size_t nmemb, size_t size)
{
	unsigned char   *ptr;
	size_t          i;

	i = 0;
	ptr = malloc(nmemb * size);
	if (!ptr)
		return NULL;
	while (i < nmemb * size)
		ptr[i++] = 0;
	return (ptr);
}