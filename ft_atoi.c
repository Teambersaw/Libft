/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:14:46 by jrossett          #+#    #+#             */
/*   Updated: 2021/11/26 16:28:50 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	res;
	int	i;
	int	j;

	i = 0;
	res = 0;
	j = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			j = -1;
		i++;
	}
	while ((nptr[i] >= '0') && (nptr[i] <= '9'))
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res * j);
}

/*
#include <stdlib.h>
#include <stdio.h>
int main()
{
	printf("\n%d\n", atoi("		1245"));
	printf("\n%d\n", ft_atoi("		1425"));
	return (0);
}*/
