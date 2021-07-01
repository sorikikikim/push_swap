/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorkim <sorkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 02:43:16 by sorkim            #+#    #+#             */
/*   Updated: 2021/07/01 19:03:48 by sorkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && (haystack[i + j] == needle[j]) && (i + j < len))
		{
			if (haystack[i + j] != needle[j])
				break ;
			j++;
		}
		if (needle[j] == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
