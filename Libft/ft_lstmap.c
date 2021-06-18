/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 18:12:21 by sorkim            #+#    #+#             */
/*   Updated: 2021/01/01 18:14:40 by sorkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *cur;
	t_list *temp;

	if (lst == 0 || f == 0)
		return (0);
	if (!(new = ft_lstnew(f(lst->content))))
		return (0);
	cur = new;
	lst = lst->next;
	while (lst)
	{
		if (!(temp = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&lst, del);
			return (0);
		}
		cur->next = temp;
		cur = temp;
		lst = lst->next;
	}
	return (new);
}
