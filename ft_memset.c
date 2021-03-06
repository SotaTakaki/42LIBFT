/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 00:26:14 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/26 22:53:22 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*cast_b;
	unsigned char	cast_c;
	size_t			i;

	cast_b = (unsigned char *)b;
	cast_c = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		cast_b[i] = cast_c;
		i++;
	}
	return (b);
}
