/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:25:02 by jrossett          #+#    #+#             */
/*   Updated: 2021/11/30 16:57:43 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	if (s == NULL)
		return (NULL);
	str = s;
	while (n)
	{
		*str = c;
		n--;
		str++;
	}
	return (s);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "a";
	char	str2[] = "a";
	memset(str, '3', sizeof(*str) * 3);
	ft_memset(str2, '3', sizeof(*str2) * 3);
	printf("%s\n", str);
	printf("%s\n", str2);
	return (0);
}*/