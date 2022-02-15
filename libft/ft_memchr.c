/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 10:01:08 by ylambark          #+#    #+#             */
/*   Updated: 2021/12/07 20:25:24 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	b;
	unsigned char	*src;
	size_t			i;

	src = (unsigned char *)s;
	b = (unsigned char)c;
	i = 0;
	while (n--)
	{
		if (src[i] == b)
		{
			return (&src[i]);
		}
		i++;
	}
	return (NULL);
}
/*int main()
{
    char *f="ahya";
    int a=4;
    int c =121;
    printf("%s\n%s",memchr(f,c,a),ft_memchr(f,c,a));
}*/
