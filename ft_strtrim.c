/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:23:10 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/23 01:12:07 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	found(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = ft_strlen(s1) - 1;
	k = 0;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (s1[i] && found((char)s1[i], set))
		i++;
	while (s1[j] && found((char)s1[j], set))
		j--;
	if (j - i < 0)
		return (ft_strdup(""));
	str = (char *)malloc((j - i + 2) * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i] && i <= j)
		str[k++] = s1[i++];
	str[k] = '\0';
	return (str);
}
