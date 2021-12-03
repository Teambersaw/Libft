/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:56:39 by jrossett          #+#    #+#             */
/*   Updated: 2021/12/03 11:42:26 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	if (s == NULL)
		return (NULL);
	str = (unsigned char *)s;
	while (n)
	{
		if ((unsigned char)c == *str)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
