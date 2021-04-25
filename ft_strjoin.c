/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:14:01 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/24 16:40:55 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnull(char *box);
char	*ft_strdog(char const *s1, char const *s2, char *box);

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len_total;
	char	*box;

	i = 0;
	len_total = ft_strlen(s1) + ft_strlen(s2);
	if (s1 == NULL && s2 == NULL)
		return (ft_strnull(box));
	box = (char *)malloc(len_total * sizeof(char) + 1);
	if (box == NULL)
		return (NULL);
	box = ft_strdog(s1, s2, box);
	return (box);
}

char	*ft_strnull(char *box)
{
	box = (char *)malloc(1 * sizeof(char));
	if (box == NULL)
		return (NULL);
	box[0] = '\0';
	return (box);
}

char	*ft_strdog(char const *s1, char const *s2, char *box)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		box[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		box[i] = s2[j];
		i++;
		j++;
	}
	box[i] = '\0';
	return (box);
}
