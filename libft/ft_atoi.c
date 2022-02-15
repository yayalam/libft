/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:09:36 by ylambark          #+#    #+#             */
/*   Updated: 2021/11/29 10:18:31 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	number;
	int		signe;
	int		i;

	i = 0;
	signe = 1;
	number = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-' )
	{
		if (str[i] == '-' )
			signe *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - 48);
		i++;
	}
	return (signe * number);
}
/*int main () {
   int val;
   char str[20];

   strcpy(str, "-2147483647SfvAfd");
   val =  atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);
   return(0);
}*/
