/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 14:37:00 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/11 15:35:09 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*cast_dst;
	const char	*cast_src;
	int			i;

	cast_dst = (char *)dst;
	cast_src = (const char *)src;
	i = 0;
	while (i < n)
	{
		cast_dst[i] = cast_src[i];
		i++;
	}
	return (dst);
}
