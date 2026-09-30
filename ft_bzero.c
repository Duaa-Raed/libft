/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 15:18:42 by dalinein          #+#    #+#             */
/*   Updated: 2026/09/29 13:53:47 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)c;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/*int	main()
{	
	char str[10]= "abcdefhjf";
	printf("%zu\n",ft_strlen(str, 3));
}*/
