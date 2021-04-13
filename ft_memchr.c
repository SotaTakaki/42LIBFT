/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 23:41:49 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/12 13:49:57 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*cast_s;
	unsigned char		cast_c;
	size_t				i;

	cast_s = (unsigned char *)s;
	cast_c = (unsigned char)c;
	i = 0;
	if (n == 0)
		return (0);
	else
	{
		while (i < n)
		{
			if (cast_s[i] == cast_c)
				return (&cast_s[i]);
			i++;
		}
	}
	return (0);
}
