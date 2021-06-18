/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 02:44:27 by sorkim            #+#    #+#             */
/*   Updated: 2020/12/28 02:44:31 by sorkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;
	char	*str;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (s == 0)
		return (0);
	if (str == 0)
		return (0);
	str_len = ft_strlen(s);
	if (str_len <= start)
	{
		str[0] = 0;
		return (str);
	}
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
