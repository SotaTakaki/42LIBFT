/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:25:52 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/26 23:05:41 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int		ft_index_headset(char const *s1, char const *set);
int		ft_index_endset(char const *s1, char const *set);
char	*ft_tobox(char *box, char const *s1,
			int capture_range, int index_headset);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		index_headset;
	int		index_endset;
	int		capture_range;
	char	*box;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	index_headset = ft_index_headset(s1, set);
	index_endset = ft_index_endset(s1, set);
	capture_range = index_endset - index_headset;
	if (index_headset == -1)
		return (ft_strdup(""));
	box = (char *)malloc(sizeof(char) * (capture_range + 1));
	if (box == NULL)
		return (NULL);
	return (ft_tobox(box, s1, capture_range, index_headset));
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

char	*ft_tobox(char *box, char const *s1,
			int capture_range, int index_headset)
{
	int	i;

	i = 0;
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
