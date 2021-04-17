/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 23:07:24 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/18 01:31:15 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_count_digits2(int n);

void	ft_putnbr_fd(int n, int fd)
{
	long		ln;
	int			digits;
	int			dev;
	char		c;

	ln = n;
	digits = ft_count_digits(n);
	dev = 1;
	while (digits > 0)
	{
		dev *= 10;
		digits--;
	}
	if (ln < 0)
	{
		ln *= -1;
		c = '-';
		write(fd, &c ,1);
	}
	while (ln >= 10)
	{
		c = (ln / digits) + '0';
		write(fd, &c, 1);
		ln %= digits;
		digits /= 10;
	}
	c = ln + '0';
	write(fd, &c, 1);
}

int	ft_count_digits2(int n)
{
	long	n_dev;
	int		digits;

	n_dev = n;
	digits = 0;
	if (n == 0)
		return (1);
	if (n_dev < 0)
	{
		n_dev *=  -1;
	}
	while (n_dev > 0)
	{
		n_dev /= 10;
		digits++;
	}
	return (digits);
}
