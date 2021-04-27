/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 01:31:56 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/27 00:04:58 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len_s;
	char			*range;

	if (s == NULL)
		return (NULL);
	i = 0;
	len_s = ft_strlen(s);
	range = (char *)malloc(len_s * sizeof(char) + 1);
	if (range == NULL)
		return (NULL);
	while (i < len_s)
	{
		range[i] = f(i, s[i]);
		i++;
	}
	range[i] = '\0';
	return (range);
}
