/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeka <kkeka@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:25:03 by kkeka             #+#    #+#             */
/*   Updated: 2024/10/15 11:59:15 by kkeka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putnbr_fd(int n, int fd)
{
	char    res;
	
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
		ft_putnbr_fd(n, fd);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
		{
			res = n + '0';
			write(fd, &res, 1);
		}
	}
}
/*
int main(void)
{
	ft_putnbr_fd(123, 2);
}*/