/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:57:52 by ylambark          #+#    #+#             */
/*   Updated: 2021/11/27 10:03:10 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			index;

	s = (unsigned char *)s1;
	d = (unsigned char *)s2;
	index = 0;
	while (index < n)
	{
		if (s[index] != d[index])
			return (s[index] - d[index]);
		index++;
	}
	return (0);
}
/*int main()
{
	char *src;
	char *dst;
	size_t n;

	n = 3;
	src = "yaihia";
	dst = "yahya";
	printf("%d",ft_memcmp(src, dst, 3));
}*/
