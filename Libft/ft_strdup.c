/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorkim <sorkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 02:40:46 by sorkim            #+#    #+#             */
/*   Updated: 2021/05/23 20:18:52 by sorkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	size_t	i;
	char	*s;

	len = ft_strlen(str);
	i = 0;
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (s == 0)
		return (0);
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = 0;
	return (s);
}
