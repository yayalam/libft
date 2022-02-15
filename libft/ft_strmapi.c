/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 00:39:59 by ylambark          #+#    #+#             */
/*   Updated: 2021/12/08 14:04:25 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*char sch(unsigned int n, char c)
{
	c = c + n;
	return c;
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*r;

	i = 0;
	if (!s || !f)
		return (NULL);
	r = (char *)malloc(sizeof(char) *(ft_strlen((char *) s) + 1));
	if (!r)
		return (NULL);
	while (s[i])
	{
		r[i] = f(i, (char) s[i]);
		i++;
	}
	r[i] = '\0';
	return (r);
}
/*int main()
{
	printf("%s", ft_strmapi("abcde",sch));
}*/
