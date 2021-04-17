/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 15:12:59 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/17 16:50:10 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_count_digits(int n);
char	*ft_malloc(int n);

char	*ft_itoa(int n)
{
	int		digits;
	long	n_dev;
	char	*arg_n;

	digits = ft_count_digits(n) - 1;
	n_dev = n;
	arg_n = ft_malloc(n);
	if (arg_n == NULL)
		return (NULL);
	if (n_dev < 0)
	{
		n_dev = n_dev * -1;
	}
	while (n_dev >= 10)
	{
		arg_n[digits] = (n_dev % 10) + '0';
		n_dev /= 10;
		digits--;
	}
	arg_n[digits] = n_dev + '0';
	digits--;
	if (n < 0)
		arg_n[digits] = '-';
	return (arg_n);
}

int	ft_count_digits(int	n)
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

char	*ft_malloc(int n)
{
	int		digits;
	char	*range;

	digits = ft_count_digits(n);
	range = (char *)malloc(digits * sizeof(char) + 1);
	if (range == NULL)
		return (NULL);
	range[digits] = '\0';
	return (range);
}
