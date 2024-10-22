/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:14:20 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/20 19:32:53 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(char const *s, char c)
{
	int	i;
	int count;
	int currentlyinword;

	i = 0;
	count = 0;
	currentlyinword = 0;
	while (s[i])
	{
		if(s[i] != c && !currentlyinword)
		{
			count++;
			currentlyinword = 1;
		}
		if(s[i] == c)
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

}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		currentlyinword;
	int		i;
	int		j;

	res = malloc((countwords(s, c) + 1) * sizeof(char *));
	init_vars(&i, &j, &currentlyinword);
	if (!res)
		return (NULL);
	while (s[i])
	{
		if(s[i] != c && !currentlyinword)
		{
			res[j] = addword(s, c, i);
			if(!res[j])
				return(free_all(res, j));
			currentlyinword = 1;
			j++;
		}
		if(s[i] == c)
			currentlyinword = 0;
		i++;
	}
	res[j] = NULL;
	return (res);
}

#include <stdio.h>

int main(void)
{
	/*char    **arr = ft_split("bonjour comment ca va ?", ' ');
	int i = 0;
	while(arr[i])
		printf("%s\n", arr[i++]);*/
	/*char s[] = "    ";
	printf("%i\n", countwords(s, ' '));*/
}