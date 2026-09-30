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
	size_t	i;
	size_t	j;
	char	*string;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	string = (char *)malloc (sizeof(char) * (s1_len + s2_len + 1));
	if (!string)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		string[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		string[j + i] = s2[j];
		j++;
	}
	string[j + i] = '\0';
	return (string);
}
/*#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2);

int	main(void)
{
	char	*result;

	result = ft_strjoin("Hello ", "World");

	if (!result)
		return (1);

	printf("Result: %s\n", result);

	free(result);
	return (0);
}*/
