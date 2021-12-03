/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:22:08 by jrossett          #+#    #+#             */
/*   Updated: 2021/11/25 16:15:06 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c <= 126 && c >= 32)
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>
int	main(int argc, char **argv)
{
	printf("%d\n", ft_isprint(127));
	printf("%d\n", isprint(127));
	return (0);
}*/