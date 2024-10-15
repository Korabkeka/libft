/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:14:20 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/15 11:59:56 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void countwords(char const *s, char c, int *counter)
{
	int i;

	i = 0;
	while(s[i])
	{
		if(s[i++] == (const char)c)
			(*counter)++;
	}
	(*counter)++;
}

static char *saveword(char const *s, char c, int *current)
{
	int len;
	int start;
	int i;
	char    *str;

	len = 0;
	i = 0;
	start = *current;
	while (s[*current] && s[*current] != c)
	{
		len++;
		(*current)++;
	}
	(*current)++;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (start < (*current) - 1)
		str[i++] = s[start++];
	str[i] = 0;
	return (str);
}

static void *free_all(char **strs, int count)
{
	while (count >= 0)
	{
		free(strs[count]);
		count--;
	}
	free(strs);
}

char **ft_split(char const *s, char c)
{
	int     i;
	int     wordcounter;
	int     current_split_start;
	char    **strarr;

	i = 0;
	wordcounter = 0;
	current_split_start = 0;
	countwords(s, c, &wordcounter);
	strarr = (char **)malloc(wordcounter * sizeof(char *) + 1);
	if(!strarr)
		return (NULL);
	while (i < wordcounter)
	{
		strarr[i] = saveword(s, c, &current_split_start);
		if (!strarr[i])
			return (free_all(strarr, i));
		i++;
	}    
	strarr[i] = 0;
	return (strarr);
}
/*int main(void)
{
	char    **arr = ft_split("bonjour comment ca va ?", ' ');
	int i = 0;
	while(arr[i])
		printf("%s\n", arr[i++]);
}*/