/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylambark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 04:45:53 by ylambark          #+#    #+#             */
/*   Updated: 2021/12/08 22:06:12 by ylambark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<fcntl.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	ft_putchar_fd('\n', fd);
}
/*int main()
{
	int i;

i = open("/Users/ylambark/Desktop/yaaaaaaaaahya", O_RDWR);
	ft_putendl_fd("yahya", i);
}*/
