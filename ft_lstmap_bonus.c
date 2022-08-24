/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 16:33:38 by Fayel-ha          #+#    #+#             */
/*   Updated: 2020/05/18 16:27:21 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *tmp;
	t_list *stock;

	if (!lst)
		return (NULL);
	tmp = ft_lstnew((*f)(lst->content));
	stock = tmp;
	while (lst)
	{
		if (lst->next != NULL)
		{
			tmp->next = ft_lstnew((*f)(lst->next->content));
			tmp = tmp->next;
		}
		lst = lst->next;
	}
	tmp->next = NULL;
	return (stock);
	(void)del(NULL);
}
