/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 23:07:24 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/18 00:22:28 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	ft_coount_digits(int n);
char	*ft_itooa(int n);

void	ft_putnbr_fd(int n, int fd)
{
	int		digits;
	char	*arg_n;

	digits = ft_coount_digits(n);
	arg_n = ft_itooa(n);
	write(fd, arg_n, 1);
}

char	*ft_itooa(int n)
{
	int		digits;
	long	n_dev;
	char	*arg_n;

	digits = ft_coount_digits(n) - 1;
	n_dev = n;
	if (n_dev < 0)
	{
		n_dev = n_dev * -1;
	}
	while (n_dev >= 10)
	{
		arg_n[digits] = (n_dev % 10) + '0';
		n_dev /= 10;
		printf("%ld\n", n_dev);
		digits--;
	}
	arg_n[digits] = n_dev + '0';
	digits--;
	if (n < 0)
		arg_n[digits] = '-';
	return (arg_n);
}

int	ft_coount_digits(int n)
{
	long	n_dev;
	int		digits;

	n_dev = n;
	digits = 0;
	if (n == 0)
		return (1);
	if (n_dev < 0)
	{
		n_dev = n_dev * -1;
		digits++;
	}
	while (n_dev > 0)
	{
		n_dev /= 10;
		digits++;
	}
	return (digits);
}
