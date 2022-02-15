/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 04:05:50 by ylambark          #+#    #+#             */
/*   Updated: 2021/12/07 20:14:07 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	bigstr(char const *s, char c)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (!s)
		return (0);
	while (*s && *s == c)
		s++;
	while (s[i])
	{
		if ((s[i] == c && s[i + 1] != c) || (s[i + 1] == '\0'))
			j++;
		i++;
	}
	return (j);
}

static int	smalstr(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char const	*skip(char const *s, char c)
{
	while (s && *s == c)
		s++;
	return (s);
}

char	**fret(char **p)
{
	free (p);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		len;
	int		j;
	int		i;
	int		k;

	j = bigstr(s, c);
	i = 0;
	p = (char **)malloc(sizeof(char *) * (j + 1));
	if (!p || !s)
		return (NULL);
	while (i < j)
	{
		s = skip(s, c);
		len = smalstr(s, c);
		p[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!p[i])
			return (fret(p));
		k = 0;
		while (k < len)
			p[i][k++] = *s++;
		p[i++][k] = '\0';
	}
	p[i] = NULL;
	return (p);
}
/*int main()
{
	char const s[] = "..y.a.h.y.a";
	char **d = ft_spit(s, '.');
	int i = 0;
	while (i < 5)
	{
		printf("s\n", d[i]);
		i++;
	}
}*/
