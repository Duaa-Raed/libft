/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 08:47:06 by dalinein          #+#    #+#             */
/*   Updated: 2026/09/29 10:56:27 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;

	if (!s1 || !s2)
		return (NULL);
	string = malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!string)
		return (NULL);
	ft_memcpy(string, s1, ft_strlen(s1));
	ft_memcpy(string + ft_strlen(s1), s2, ft_strlen(s2));
	string[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (string);
}
/*int	main(void)
{
	char	*result;

	result = ft_strjoin("Hello ", "World");

	if (!result)
		return (1);

	printf("Result: %s\n", result);

	free(result);
	return (0);
}*/
