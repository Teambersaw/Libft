/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:41:33 by jrossett          #+#    #+#             */
/*   Updated: 2021/11/30 11:00:23 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*
#include <string.h>
#include <stdio.h>
int main()
{
	printf("\n%ld\n", ft_strlen(NULL));
	// printf("\n%ld\n", strlen(NULL));
	return (0);
}*/
