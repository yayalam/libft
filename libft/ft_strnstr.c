/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:58:57 by ylambark          #+#    #+#             */
/*   Updated: 2021/12/07 20:47:56 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (ft_strlen(needle) == 0 || needle == haystack)
		return ((char *)haystack);
	if (ft_strlen(needle) > ft_strlen(haystack))
		return (0);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j]
			&& needle[j] == haystack[i + j] && (i + j < len))
		{
			j++;
		}
		if (j == len || needle[j] == '\0')
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
/*int main()
{
	char *a;
	char *b;
	size_t len;

	b = "123456789";
	a = "2";
	len = 0;
	printf("%s",ft_strnstr(b, a, len));
}*/
