/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 01:22:51 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/09 11:32:40 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_count(char *src);

char	*ft_strdup(char *src)
{
	char	*box;
	int		i;

	box = malloc(sizeof(char) * ft_count(src) + 1);
	if (box == NULL)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		box[i] = src[i];
		i++;
	}
	box[i] = '\0';
	return (box);
}

char	ft_count(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
