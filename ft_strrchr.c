/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 16:43:26 by dalinein          #+#    #+#             */
/*   Updated: 2026/09/29 13:56:54 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i - 1] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	if((char)c == '\0')
		 return ((char *)&s[i]);
	return(NULL);
}
