/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 02:43:48 by sorkim            #+#    #+#             */
/*   Updated: 2020/12/30 15:51:17 by sorkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	find;

	i = ft_strlen(s);
	find = c;
	while (i >= 0)
	{
		if (s[i] == find)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
