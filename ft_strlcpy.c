/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:02:40 by jrossett          #+#    #+#             */
/*   Updated: 2021/11/25 16:23:25 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t size)
{
	size_t	a;
	size_t	n;

	n = 0;
	a = 0;
	while (src[a])
	{
		n++;
		a++;
	}
	if (size < 1)
		return (n);
	a = 0;
	while (src[a] && a < size - 1)
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (n);
}

/*
#include <string.h>
#include <bsd/string.h>
#include <stdio.h>
int main()
{
	char	dst2[50];
	char	*src = "nonononon";
	char	dst[50];
	char	*src2 = "nonononon";
	strlcpy(dst, src, 2);
	ft_strlcpy(dst2, src2, 2);
	printf("\n%s\n", dst);
	printf("\n%s\n", dst2);
	return (0);
}*/