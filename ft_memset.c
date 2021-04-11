/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 00:26:14 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/11 14:32:20 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char			*cast_b;
	char	cast_c;
	int				i;

	cast_b = (char *)b;
	cast_c = (unsigned char)c;
	i = 0;
	while(i < len)
	{
		cast_b[i] = cast_c;
		i++;
	}
	return (b);
}
