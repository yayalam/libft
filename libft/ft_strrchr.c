/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:30:18 by ylambark          #+#    #+#             */
/*   Updated: 2021/11/27 10:17:33 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		len--;
	}
	return (0);
}
/*int main () {
   const char str[] = "yjahyaajb.bsa";
   char ch= 'j';
   char *ya;
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("string after |%c| is - |%s|\n", ch,ret);

   ya = strrchr(str, ch);

   printf("string after |%c| is - |%s|\n", ch, ya);
   return(0);
}*/
