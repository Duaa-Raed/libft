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
	int	i;
	int	j;
	int	len;

	len = ft_strlen(dst) + ft_strlen(src);
	if (size != 0)
	{
		i = 0;
		if (i < size)
		{
			while (dst[i] != '\0')
			{
				i++;
			}
			j = 0;
			dst[i] = src[j];
			i++;
			j++;
			dst[i] = '\0';
		}
		return (dst);
	}
}
