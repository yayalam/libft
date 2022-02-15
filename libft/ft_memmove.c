/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:44:43 by ylambark          #+#    #+#             */
/*   Updated: 2021/12/06 17:06:20 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>
#include<stdio.h>
#include<unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*c;
	char	*d;

	if (!dst && !src)
		return (0);
	c = (char *)src;
	d = (char *)dst;
	if (d <= c)
	{
		d = ft_memcpy(d, c, len);
	}
	else
	{
		while (0 < len--)
		{
			d[len] = c[len];
		}
	}
	return (dst);
}
/*int main () {
   char dest[] = "123456789";

   printf("Before memmove dest = %s, src = %s\n", dest, dest + 1);
   ft_memmove(dest, dest + 1, 3);
   printf("After memmove dest = %s, src = %s\n", dest, dest + 1);

   return(0);
}*/
