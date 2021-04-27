/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 13:49:13 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/27 00:02:42 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*f_content;
	t_list	*first_new;
	t_list	*next_new;

	if (lst == NULL || f == NULL)
		return (NULL);
	f_content = f(lst -> content);
	first_new = ft_lstnew(f_content);
	if (first_new == NULL)
		return (NULL);
	next_new = first_new;
	lst = lst -> next;
	while (lst != NULL)
	{
		f_content = f(lst -> content);
		next_new -> next = ft_lstnew(f_content);
		if (next_new -> next == NULL)
		{
			ft_lstclear(&next_new->next, del);
			return (NULL);
		}
		next_new = next_new -> next;
		lst = lst -> next;
	}
	return (first_new);
}
