/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 01:32:52 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/21 00:11:16 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
//	t_list	*del_lst;

	//del_lst = *lst;
	while (*lst != NULL)
	{
		ft_lstdelone(*lst, del);
		lst = &((*lst) -> next);
	}
	lst = NULL;
}
