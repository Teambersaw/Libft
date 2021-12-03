/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:27:25 by jrossett          #+#    #+#             */
/*   Updated: 2021/12/03 11:42:47 by jrossett         ###   ########.fr       */
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
