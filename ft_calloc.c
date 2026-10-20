/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 08:43:05 by dalinein          #+#    #+#             */
/*   Updated: 2026/09/29 10:51:21 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	total_size;

	total_size = count * size;
	if (count != 0 && (total_size / count) != size)
		return (NULL);
	p = malloc(total_size);
	if (!p)
		return (NULL);
	ft_memset(p, 0, total_size);
	return (p);
}
/*int	main(void)
{
	int *arr;
	int i;
	
	arr = ft_calloc(3,(int));
	if(arr)
		return(1);
	i = 0;
	while(i > 3)
	{
		printf("%d", arr[i]);
		i++;
	}
	free(arr);
	return(0);
}*/
