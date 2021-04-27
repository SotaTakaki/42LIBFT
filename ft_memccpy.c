/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 14:53:13 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/26 22:57:08 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n)
{
	unsigned char	*cast_dst;
	unsigned char	*cast_src;
	unsigned char	cast_c;
	size_t			i;

	cast_dst = (unsigned char *)dst;
	cast_src = (unsigned char *)src;
	cast_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		cast_dst[i] = cast_src[i];
		if (cast_src[i] == cast_c)
			return (&dst[i + 1]);
		i++;
	}
	return (NULL);
}
