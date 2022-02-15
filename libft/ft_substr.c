/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 17:01:12 by ylambark          #+#    #+#             */
/*   Updated: 2021/12/08 14:07:34 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*r;

	i = 0;
	r = NULL;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		start = ft_strlen(s);
	if (len >= ft_strlen(s))
		len = ft_strlen(s);
	r = (char *)malloc(sizeof (char) * (len + 1));
	if (!r)
		return (NULL);
	while (i < (unsigned int)len)
	{
		r[i] = s[start];
		i++;
		start++;
	}
	r[i] = '\0';
	return (r);
}
/*int main()
{
	char p[] = "yahyalambarki";
	char *r;
	r = ft_substr(p,3,10);
	printf("%s",r);
}*/
