/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorkim <sorkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 02:41:48 by sorkim            #+#    #+#             */
/*   Updated: 2021/07/01 19:01:14 by sorkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize < dst_len + 1)
		return (dstsize + src_len);
	if (dstsize > dst_len + 1)
	{
		while (src[i] && dstsize > dst_len + 1 + i)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
	}
	dst[dst_len + i] = 0;
	return (dst_len + src_len);
}
