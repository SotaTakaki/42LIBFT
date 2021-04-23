/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:25:52 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/24 02:36:25 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int		ft_index_headset(char const *s1, char const *set);
int		ft_index_endset(char const *s1, char const *set);
char	*ft_nullbox2(char *box);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		index_headset;
	int		index_endset;
	int		capture_range;
	char	*box;

	i = 0;
	index_headset = ft_index_headset(s1, set);
	index_endset = ft_index_endset(s1, set);
	capture_range = index_endset - index_headset;
	if (index_headset == -1)
		return (ft_nullbox2(box));
	box = (char *)malloc(sizeof(char) * (capture_range + 1));
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
			return (len_s1);
		len_s1--;
	}
	return (-1);
}

char	*ft_nullbox2(char *box)
{
	box = (char *)malloc(sizeof(char) * 1);
	if (box == NULL)
		return (NULL);
	box[0] = '\0';
	return (box);
}
