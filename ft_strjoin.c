/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:14:01 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/13 14:20:02 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len_s1;
	int		len_s2;
	int		len_total;
	char	*box;

	i = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	len_total = len_s1 + len_s2;
	if (s1 == NULL || s2 == NULL)
	{
		box = (char *)malloc(1 * sizeof(char));
		if (box == NULL)
			return (NULL);
		box[0] = '\0';
		return (box);
	}
	else
	{
		box = (char *)malloc(len_total * sizeof(char) + 1);
		if (box == NULL)
			return (NULL);
		while (i < len_s1)
		{
			box[i] = s1[i];
			i++;
		}
		i = 0;
		while (i < len_s2)
		{
			box[len_s1] = s2[i];
			i++;
			len_s1++;
		}
		box[len_s1] = '\0';
		return (box);
	}
}
