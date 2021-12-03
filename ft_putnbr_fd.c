/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:50:03 by jrossett          #+#    #+#             */
/*   Updated: 2021/11/30 16:57:00 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	b;

	if (n < 0)
	{
		b = n * -1;
		write(fd, "-", 1);
	}
	else
		b = n;
	if (b > 9)
	{
		ft_putnbr_fd(b / 10, fd);
		ft_putnbr_fd(b % 10, fd);
	}	
	if (b <= 9)
	{
		ft_putchar_fd(b + '0', fd);
	}
}

// int	main(void)
// {
// 	int	n;

// 	n = -165;
// 	ft_putnbr_fd(n, 1);
// 	return (0);
// }
