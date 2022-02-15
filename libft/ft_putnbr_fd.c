/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:55:40 by ylambark          #+#    #+#             */
/*   Updated: 2021/12/09 12:55:48 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<fcntl.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nr;

	nr = n;
	if (nr < 0)
	{
		nr = -nr;
		ft_putchar_fd('-', fd);
	}
	if (nr >= 0 && nr <= 9)
	{
		ft_putchar_fd(nr + 48, fd);
	}
	if (nr >= 10)
	{
		ft_putnbr_fd(nr / 10, fd);
		ft_putchar_fd((nr % 10) + 48, fd);
	}
}
/*int main()
{
	int a;

	a = open("/Users/ylambark/Desktop/yaaaaaaaaahya", O_RDWR);
	ft_putnbr_fd(1, a);
}*/
