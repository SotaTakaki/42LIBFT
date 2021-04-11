/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 16:11:49 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/11 23:05:44 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

 void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*cast_dst;
	const unsigned char	*cast_src;
	size_t i;

	cast_dst = (unsigned char *)dst;
	cast_src = (const unsigned char *)src;
	i = 0;
	if (cast_dst <= cast_src)
	{
		while (i < len)
		{
			cast_dst[i] = cast_src[i];
			i++;
		}
	}
	else
	{
		i = len - 1;
		while (0 < len)
		{
			cast_dst[i] = cast_src[i];
			i--;
			len--;
		}
	}
	return (dst);
}
