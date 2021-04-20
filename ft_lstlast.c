/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 00:22:55 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/20 00:34:21 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		i;
	t_list	*cpy_lst;

	i = 0;
	cpy_lst = lst;
	while (lst != NULL)
	{
		lst = lst -> next;
		i++;
	}
	while (i > 1)
	{
		cpy_lst = cpy_lst -> next;
		i--;
	}
	return (cpy_lst);
}
