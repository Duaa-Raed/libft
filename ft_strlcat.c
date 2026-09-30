/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 16:17:05 by dalinein          #+#    #+#             */
/*   Updated: 2026/09/29 10:56:49 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size != dst_len)
	{
		return (size + src_len);
	}
	i = dst_len;
	j = 0;
	while (src[j] != '\0' && (i < size -1))
		{
			dst[i] = src[j];
			i++;
			j++;
		}
	dst[i] = '\0';
	return (dst_len + src_len);
}