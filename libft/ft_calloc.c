/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 08:37:09 by ylambark          #+#    #+#             */
/*   Updated: 2021/12/07 20:15:46 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	i;

	i = 0;
	str = (void *)malloc(size * count);
	if (!str)
		return (0);
	while (i < size * count)
	{
		*(char *)str = 0;
		i++;
		str++;
	}
	return ((char *)str - i);
}
