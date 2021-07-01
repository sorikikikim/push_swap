/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorkim <sorkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 18:12:21 by sorkim            #+#    #+#             */
/*   Updated: 2021/07/01 18:58:07 by sorkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*cur;
	t_list	*temp;

	if (lst == 0 || f == 0)
		return (0);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (0);
	cur = new;
	lst = lst->next;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
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
