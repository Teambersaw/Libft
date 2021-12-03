/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:33:25 by jrossett          #+#    #+#             */
/*   Updated: 2021/11/25 16:22:42 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	srclen;

	i = ft_strlen(dst);
	j = 0;
	srclen = ft_strlen(src);
	if (size <= i)
		return (size + srclen);
	while (src[j] && ((j + i) < (size - 1)))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (srclen + i);
}

/*
#include <string.h>
#include <stdio.h>
#include <bsd/string.h>
int main()
{
	char	dst2[50] = "ouioui";
	char	*src = "nonononon";
	char	dst[50] = "ouioui";
	char	*src2 = "nonononon";
	strlcat(dst, src, 50);
	ft_strlcat(dst2, src2, 20);
	printf("\n%s\n", dst);
	printf("\n%s\n", dst2);
	return (0);
}*/