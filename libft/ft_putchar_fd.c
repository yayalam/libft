/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:52:12 by ylambark          #+#    #+#             */
/*   Updated: 2021/12/08 21:48:12 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<fcntl.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*int main()
{
	int a;
	a = open("/Users/ylambark/Desktop/teest.c", O_RDWR);
	ft_putchar_fd('Z', a);
}*/
