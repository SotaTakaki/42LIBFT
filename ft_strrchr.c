/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 16:45:36 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/09 17:10:01 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str,int chr)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == chr)
			return (&str[i]);
		i--;
	}
	return (0);
}
