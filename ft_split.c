/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:14:20 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/23 01:01:54 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(char const *s, char c)
{
	int	i;
	int	count;
	int	currentlyinword;

	i = 0;
	count = 0;
	currentlyinword = 0;
	while (s[i])
	{
		if (s[i] != c && !currentlyinword)
		{
			count++;
			currentlyinword = 1;
		}
		if (s[i] == c)
			currentlyinword = 0;
		i++;
	}
	return (count);
}

static void	init_vars(int *i, int *j, int *currentlyinword)
{
	*i = 0;
	*j = 0;
	*currentlyinword = 0;
}

static char	*addword(const char *s, char c, int start_index)
{
	char	*res;
	size_t	i;

	i = 0;
	while (s[start_index + i] != c && start_index + i < strlen(s))
		i++;
	res = malloc((i + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (s[start_index + i] != c && start_index + i < strlen(s))
	{
		res[i] = s[start_index + i];
		i++;
	}
	res[i] = 0;
	return (res);
}

static void	*free_all(char **strs, int count)
{
	while (count >= 0)
	{
		free(strs[count]);
		count--;
	}
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		currentlyinword;
	int		i;
	int		j;

	init_vars(&i, &j, &currentlyinword);
	res = malloc((countwords(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && !currentlyinword)
		{
			res[j] = addword(s, c, i);
			if (!res[j])
				return (free_all(res, j));
			currentlyinword = 1;
			j++;
		}
		if (s[i] == c)
			currentlyinword = 0;
		i++;
	}
	res[j] = NULL;
	return (res);
}
