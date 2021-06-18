/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 02:36:18 by sorkim            #+#    #+#             */
/*   Updated: 2020/12/30 00:03:28 by sorkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	search;
	size_t			i;

	str = (unsigned char*)s;
	search = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == search)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}
