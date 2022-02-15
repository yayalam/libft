/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:16:02 by ylambark          #+#    #+#             */
/*   Updated: 2021/11/25 04:48:29 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (0);
}

/*int main () {
   const char str[] = "yahya";
   const char ch= 'e';
   char *ya;
   char *ret;
	
   ret = ft_strchr(str, ch);

   printf("string after |%c| is - |%s|\n", ch,ret);
	
   ya = strchr(str, ch);
	
   printf("string after |%c| is - |%s|\n", ch, ya);
   return(0);
}*/
