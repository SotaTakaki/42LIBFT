/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 01:01:05 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/12 13:30:25 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*box;
	size_t	box_max;
	size_t	i;

	box = (char *)malloc(count * size);
	if (box == NULL)
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
