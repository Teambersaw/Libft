/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:27:25 by jrossett          #+#    #+#             */
/*   Updated: 2021/11/30 16:57:49 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*srcs;

	dst = dest;
	srcs = (char *)src;
	if (src == NULL || dest == NULL)
		return (NULL);
	if (srcs > dst)
		ft_memcpy(dst, srcs, n);
	else
	{
		srcs += n - 1;
		dst += n - 1;
		while (n)
		{
			*dst = *srcs;
			n--;
			dst--;
			srcs--;
		}
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	int j;
	j = 0;
	i = 0;
	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
	char sResult2[] = {67, 68, 67, 68, 69, 0, 45};
	memmove(sResult + 1, sResult, 2);
	//printf("%s\n", sResult);
	ft_memmove(sResult2 + 1, sResult2, 2);
	//printf("%s\n", sResult2);
	while (sResult[i])
	{
		printf("%d\n", sResult[i]);
		i++;
	}
	printf("\n");
	while (sResult2[j])
	{
		printf("%d\n", sResult2[j]);
		j++;
	}
	return (0);
}*/
