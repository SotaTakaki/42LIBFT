/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 14:37:00 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/23 16:56:47 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*cast_dst;
	const char	*cast_src;
	size_t		i;

	cast_dst = (char *)dst;
	cast_src = (const char *)src;
	if (cast_dst == cast_src || n == 0)
		return (dst);
	i = 0;
	while (i < n)
	{
		cast_dst[i] = cast_src[i];
		i++;
	}
	return (dst);
}
