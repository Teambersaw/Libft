/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:12:17 by jrossett          #+#    #+#             */
/*   Updated: 2021/11/26 13:39:51 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>
int main()
{
	printf("\n%s\n", strchr("tripouille", 'i' + 256));
	printf("\n%s\n", ft_strchr("tripouille", 'i' + 256));
	return (0);
}*/