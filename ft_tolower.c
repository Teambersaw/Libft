/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:08:50 by jrossett          #+#    #+#             */
/*   Updated: 2021/11/25 16:33:44 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c <= 90 && c >= 65)
		return (c + 32);
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("%c\n", tolower(','));
	printf("%c\n", ft_tolower(','));
	return (0);
}*/