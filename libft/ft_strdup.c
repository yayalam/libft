/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:59:35 by ylambark          #+#    #+#             */
/*   Updated: 2021/12/08 15:01:27 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*r;

	i = 0;
	while (s1[i])
		i++;
	r = (char *)malloc(sizeof(char) * (i + 1));
	if (!r)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		r[i] = (char)s1[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
/*int main()
{
    char p[]="hello world";
    char *y;
    y = ft_strdup(p);
    printf("%s,%d\n%d",y,strlen(y),strlen(p));
}*/
