/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 02:39:27 by sorkim            #+#    #+#             */
/*   Updated: 2020/12/28 12:23:47 by sorkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*str;
	unsigned char	value;
	size_t			i;

	str = b;
	value = c;
	i = 0;
	while (i < len)
	{
		str[i] = value;
		i++;
	}
	return (b);
}
