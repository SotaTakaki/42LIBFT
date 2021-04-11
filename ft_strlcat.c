/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 09:59:59 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/09 10:10:55 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	k = 0;
	if (size <= i)
		return (size + j);
		else if (size > i)
		{
			while (src[k] != '\0' && k < size - i - 1)
			{
				dest[i + k] = src[k];
				k++;
			}
			dest[i + k] = '\0';
			while (src[k] != '\0')
				k++;
		}
		return (i + k);
}
