/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 16:11:49 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/12 14:08:45 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*cast_dst;
	const unsigned char	*cast_src;

	cast_dst = (unsigned char *)dst;
	cast_src = (const unsigned char *)src;
	if (cast_dst <= cast_src)
	{
		while (0 < len)
		{
			*cast_dst++ = *cast_src++;
			len--;
		}
	}
	else
	{
		while (0 < len)
		{
			cast_dst[len - 1] = cast_src[len - 1];
			len--;
		}
	}
	return (dst);
}
