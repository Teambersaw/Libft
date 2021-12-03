/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:34:04 by jrossett          #+#    #+#             */
/*   Updated: 2021/11/25 16:03:31 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((64 < c && c < 91) || (96 < c && c < 123))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	printf("%d\n", ft_isalpha(argv[1][0]));
	return (0);
}*/