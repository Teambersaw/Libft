/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:56:13 by jrossett          #+#    #+#             */
/*   Updated: 2021/12/02 13:01:12 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*srcs;

	dst = (char *)dest;
	srcs = (char *)src;
	if (src == NULL && dest == NULL)
		return (NULL);
	while (n--)
	{
		*dst = *srcs;
		dst++;
		srcs++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{

	printf("\n%s\n", memcpy(NULL, NULL, 2));
	printf("\n%s\n", ft_memcpy(NULL, NULL, 2));
	return (0);
}*/