/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 23:30:18 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/26 23:03:44 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_makebox(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		len_s;
	size_t				capture_range;
	char				*box;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	capture_range = len_s - start + 1;
	if (len_s <= start)
		return (ft_strdup(""));
	else
	{
		if (len < capture_range)
			box = ft_makebox(s, start, len);
		else
			box = ft_makebox(s, start, capture_range);
	}
	return (box);
}

char	*ft_makebox(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*box;

	i = 0;
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
	return (box);
}
