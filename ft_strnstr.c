/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:48:15 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/15 12:08:47 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t  i;
	size_t  j;

	i = 0;
	if (needle[0] == 0)
	{
		return ((char *)haystack);
	}
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
			if (needle[j] == 0)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
/*int main(void)
{
	char s1[] = "hello";
	char s2[] = "lo";
	printf("%s\n", ft_strnstr(s1, s2, 5));
}*/