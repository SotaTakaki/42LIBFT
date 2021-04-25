/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 23:30:18 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/25 23:11:02 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_nullbox(char *box);
char	*ft_lenbox(char const *s, unsigned int start, size_t len);
char	*ft_rangebox(char const *s, unsigned int start, size_t capture_range);

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
		return (ft_nullbox(box));
	else
	{
		if (len < capture_range)
			box = ft_lenbox(s, start, len);
		else
			box = ft_rangebox(s, start, capture_range);
	}
	return (box);
}

char	*ft_nullbox(char *box)
{
	box = (char *)malloc(1 * sizeof(char));
	if (box == NULL)
		return (NULL);
	box[0] = '\0';
	return (box);
}

char	*ft_lenbox(char const *s, unsigned int start, size_t len)
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

char	*ft_rangebox(char const *s, unsigned int start, size_t capture_range)
{
	size_t	i;
	char	*box;

	i = 0;
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
	return (box);
}
