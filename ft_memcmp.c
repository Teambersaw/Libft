/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:17:33 by jrossett          #+#    #+#             */
/*   Updated: 2021/11/26 16:40:17 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;

	i = 0;
	if (n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
		n--;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>

int main()
{
	const char *s1 = "aaaaaaaaaa";
	const char *s2 = "zaaaaaaaaa";

	printf("%d\n", memcmp(s1, s2, 1));
	printf("%d\n", ft_memcmp(s1, s2, 1));
	return (0);
}*/