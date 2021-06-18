/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 02:40:02 by sorkim            #+#    #+#             */
/*   Updated: 2020/12/30 12:45:05 by sorkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	find;

	i = 0;
	find = c;
	while (s[i])
	{
		if (s[i] == find)
			return ((char *)&s[i]);
		i++;
	}
	if (find == 0)
		return ((char *)&s[i]);
	return (0);
}
