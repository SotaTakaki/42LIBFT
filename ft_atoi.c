/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:04:26 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/20 15:00:51 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_atoi(char *str)
{
	int				i;
	int				minus;
	long	answer;

	i = 0;
	minus = 1;
	answer = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			minus = minus * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		answer = answer * 10;
		answer += str[i] - '0';
		i++;
	}
	if (answer * minus > LONG_MAX)
		return (-1);
	else if (answer * minus < LONG_MIN)
		return (0);
	else
		return (answer * minus);
}
