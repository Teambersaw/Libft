/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:51:43 by jrossett          #+#    #+#             */
/*   Updated: 2021/11/29 12:34:22 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c <= 122 && c >= 97)
		return (c - 32);
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("%c\n", toupper('Z'));
	printf("%c\n", ft_toupper('Z'));
	return (0);
}*/