/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:21:02 by jrossett          #+#    #+#             */
/*   Updated: 2021/11/26 14:37:43 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = s;
	while (n)
	{
		*str = '\0';
		str++;
		n--;
	}
}

/*
#include <strings.h>
#include <stdio.h>
int main()
{
	char str[] = "lalalalddddddddddddddddddddda";
	char str2[] = "lalalalddddddddddddddddddddda";
	bzero(str + 4, 3);
	ft_bzero(str2 + 4, 3);
	printf("%s\n", str);
	printf("%s\n", str2);
	return (0);
}*/