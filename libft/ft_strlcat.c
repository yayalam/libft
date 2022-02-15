/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 15:17:08 by ylambark          #+#    #+#             */
/*   Updated: 2021/11/10 14:46:03 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	res_d;
	size_t	res_s;

	i = ft_strlen(dst);
	j = 0;
	res_d = ft_strlen(dst);
	res_s = ft_strlen(src);
	if (size == 0)
		return (res_s);
	if (size <= res_d)
		return (res_s + size);
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (res_d + res_s);
}
/*int				main(void)
{
	char			dest[50] = "lambarki";
	char			src[50] = "yahya";
	unsigned int	size;

	size = -10;
	//printf("%lu\n", strlcat(dest, src, size));
	printf("%lu\n", ft_strlcat(dest, src, size));
	printf("dest: %s\nsrc: %s\n", dest, src);
}*/
