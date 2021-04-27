/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 23:07:24 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/27 01:07:49 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_count_digits2(long ln);

void	ft_putnbr_fd(int n, int fd)
{
	long		ln;
	int			digits;
	int			dev;

	ln = n;
	digits = ft_count_digits2(ln);
	dev = 1;
	while (digits > 0)
	{
		dev *= 10;
		digits--;
	}
	if (ln < 0)
	{
		ln *= -1;
		ft_putchar_fd('-', fd);
	}
	while (dev > 0)
	{
		ft_putchar_fd((ln / dev) + '0', fd);
		ln %= dev;
		dev /= 10;
	}
}

int	ft_count_digits2(long ln)
{
	int		digits;

	digits = 0;
	if (ln < 0)
		ln *= -1;
	if (ln < 10)
		return (0);
	while (ln > 9)
	{
		ln /= 10;
		digits++;
	}
	return (digits);
}
