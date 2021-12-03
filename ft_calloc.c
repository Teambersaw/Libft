/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:45:18 by jrossett          #+#    #+#             */
/*   Updated: 2021/12/02 11:15:14 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (size == 0 || nmemb == 0)
	{
		size = 1;
		nmemb = 1;
	}
	array = malloc(nmemb * size);
	if (!array)
		return (NULL);
	ft_bzero(array, nmemb * size);
	return (array);
}

/*
#include <stdio.h>
int main()
{
	int	*str;
	
	str = ft_calloc(20, sizeof(*str));
	printf("\n%d\n", *str);
	return (0);
}*/
