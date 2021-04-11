/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 01:01:05 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/12 01:16:55 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*box;
	size_t	box_max;
	size_t	i;

	if (!(box = (char *)malloc(count * size)))
			return (0);
	box_max = count * size;
	i = 0;
	while (i < box_max)
	{
		box[i] = 0;
		i++;
	}
	return (box);
}
