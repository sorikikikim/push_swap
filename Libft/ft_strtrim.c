/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 22:53:47 by sorkim            #+#    #+#             */
/*   Updated: 2020/12/29 22:53:49 by sorkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	is_end(char const *s1, char const *set, size_t len)
{
	size_t i;

	i = 0;
	while (i < len && ft_strchr(set, s1[len - i - 1]))
		i++;
	return (len - i);
}

static size_t	is_start(char const *s1, char const *set, size_t len)
{
	size_t i;

	i = 0;
	while (i < len && ft_strchr(set, s1[i]))
		i++;
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*str;
	size_t	start;
	size_t	end;

	if (s1 == 0)
		return (0);
	if (set == 0)
		return (ft_strdup(s1));
	len = ft_strlen(s1);
	start = is_start(s1, set, len);
	end = is_end(s1, set, len);
	if (start >= end)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (str == 0)
		return (0);
	ft_strlcpy(str, s1 + start, end - start + 1);
	return (str);
}
