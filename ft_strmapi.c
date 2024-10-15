/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:07:54 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/15 12:06:22 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char            *res;
	unsigned int    i;

	res = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}
/*static char    modif(unsigned int i, char c)
{
	if(i & 1 && (c >= 'a' && c <= 'z'))
		return ('a');
	return ('b');
}

int main(void)
{
	printf("%s\n", ft_strmapi("hello world", modif));
}*/