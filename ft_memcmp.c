/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:43:17 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/15 11:55:03 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char   *str1;
	unsigned char   *str2;
	size_t          i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((i < n) && (str1[i] && str2[i]))
	{
		if(str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*int main(void)
{
	char s1[] = "helld";
	char s2[] = "hello";
	printf("%d\n", ft_memcmp(s1, s2, 0));
}*/