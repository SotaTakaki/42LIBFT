/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:25:52 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/13 18:03:31 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_index_headset(char const *s1, char const *set);
int	ft_index_endset(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		index_headset;
	int		index_endset;
	int		len_s1;
	int		capture_range;
	char	*box;

	i = 0;
	index_headset = ft_index_headset(s1, set);
	index_endset = ft_index_endset(s1, set);
	len_s1 = ft_strlen(s1);
	capture_range = len_s1 - index_headset - (len_s1 - (index_endset + 1));
	if (index_headset == -1)
	{
		box = (char *)malloc(1 * sizeof(char));
		if (box == NULL)
			return (NULL);
		box[0] = '\0';
		return (box);
	}
	box = (char *)malloc(capture_range * sizeof(char) + 1);
	if (box == NULL)
		return (NULL);
	while (0 < capture_range)
	{
		box[i] = s1[index_headset];
		i++;
		index_headset++;
		capture_range--;
	}
	box[i] = '\0';
	return (box);
}

int	ft_index_headset(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	stop_flag;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		stop_flag = 0;
		while (set[j] != '\0')
		{
			if (s1[i] != set[j])
				stop_flag++;
			j++;
		}
		if (j == stop_flag)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_index_endset(char const *s1, char const *set)
{
	int	j;
	int	stop_flag;
	int	len_s1;

	len_s1 = ft_strlen(s1);
	while (0 < len_s1)
	{
		j = 0;
		stop_flag = 0;
		while (set[j] != '\0')
		{
			if (s1[len_s1 - 1] != set[j])
				stop_flag++;
			j++;
		}
		if (j == stop_flag)
			return (len_s1 - 1);
		len_s1--;
	}
	return (-1);
}
