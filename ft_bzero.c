/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 21:42:49 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/26 22:54:18 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*cast_s;
	size_t			i;

	cast_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		cast_s[i] = '\0';
		i++;
	}
}
