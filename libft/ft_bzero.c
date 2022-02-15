/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:58:46 by ylambark          #+#    #+#             */
/*   Updated: 2021/11/28 08:13:30 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int					i;
	unsigned char		*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (n > 0)
	{
		ptr[i] = 0;
		i++;
		n--;
	}
}
/*int main () {
   char str[50];
   int i=0;
   strcpy(str,"This is string.h library function");
  int j = strlen(str);
   puts(str);

   bzero(str, 5);
   //puts(str);
   while(i < j)
   {
	   printf("%c",str[i]);
	   i++;
   }
   return(0);
}*/
