/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:37:41 by ylambark          #+#    #+#             */
/*   Updated: 2021/11/27 13:33:05 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*s;
	char		*d;
	size_t		index;

	s = (const char *)src;
	d = (char *)dst;
	index = 0;
	if ((s == NULL) && (d == NULL))
		return (0);
	while (index < n)
	{
		d[index] = s[index];
		index++;
	}
	return ((void *)d);
}
/*int main()
{	
	char s[] = "123456789";
	size_t b = 1;
	char d[] = "abcdefghi";
	printf("%s\n",ft_memcpy(d, s, 6));
}*/
