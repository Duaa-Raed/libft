/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 08:48:05 by dalinein          #+#    #+#             */
/*   Updated: 2026/09/29 11:00:12 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*result;
	size_t	clen;

	slen = ft_strlen(s);
	if (start >= slen)
	{
		result = malloc(1);
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	clen = slen - start;
	if (clen > len)
		clen = len ;
	result = malloc(clen + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < clen)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*int	main(void)
{
	char	*result;

	result = ft_substr("Hello World", 6, 5);

	if (!result)
		return (1);

	printf("Result: %s\n", result);

	free(result);
	return (0);
}*/
