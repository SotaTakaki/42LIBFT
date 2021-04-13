/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 23:30:18 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/13 13:48:59 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		len_s;
	int		capture_range;
	char	*box;

	i = 0;
	len_s = ft_strlen(s);
	capture_range = len_s - start + 1;
	if (len_s <= start)
	{
		box = (char *)malloc(1 * sizeof(char));
		if (box == NULL)
			return (NULL);
		box[0] = '\0';
		return (box);
	}
	else
	{
		if (len < capture_range)
		{
			box = (char *)malloc(len * sizeof(char) + 1);
			if (box == NULL)
				return (NULL);
			while (i < len)
			{
				box[i] = s[start];
				i++;
				start++;
			}
			box[i] = '\0';
		}
		else
		{
			box = (char *)malloc(capture_range * sizeof(char) + 1);
			if (box == NULL)
				return (NULL);
			while (i < capture_range)
			{
				box[i] = s[start];
				i++;
				start++;
			}
			box[i] = '\0';
		}
		return (box);
	}
}
