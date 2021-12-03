/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:56:13 by jrossett          #+#    #+#             */
/*   Updated: 2021/12/03 11:42:39 by jrossett         ###   ########.fr       */
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
