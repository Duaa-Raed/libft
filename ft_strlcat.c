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
	if (size == 0)
		return (src_len);
	if (dst_len >= size)
		return (size + src_len);
	i = dst_len;
	j = 0;
	while (src[j] && i < size - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (dst_len + src_len);
}
/*int	main(void)
{
	char	dst[20] = "42";
	size_t	result;

	result = ft_strlcat(dst, " Amman", sizeof(dst));
	printf("dst: %s\n", dst);
	printf("return: %zu\n", result);

	char	dst2[8] = "42";

	result = ft_strlcat(dst2, " Amman Libft", sizeof(dst2));
	printf("dst2: %s\n", dst2);
	printf("return: %zu\n", result);

	char	dst3[20] = "42";

	result = ft_strlcat(dst3, " Amman", 0);
	printf("dst3: %s\n", dst3);
	printf("return: %zu\n", result);

	return (0);
}*/