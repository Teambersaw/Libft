/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:35:01 by jrossett          #+#    #+#             */
/*   Updated: 2021/12/03 11:41:49 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	size;

	size = 0;
	if (n < 0 && n > -2147483648)
	{
		n = n * -1;
		size++;
	}
	if (n == -2147483648)
		return (11);
	if (n == 0)
	{
		size = 1;
		return (size);
	}
	while (n > 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static void	ft_cpy(int len, unsigned int b, char *tab)
{
	while (len >= 0 && b > 0)
	{
		tab[len--] = b % 10 + '0';
		b = b / 10;
	}
}

char	*ft_itoa(int n)
{
	char			*tab;
	int				len;
	unsigned int	b;

	tab = malloc(sizeof(char) * ft_len(n) + 1);
	if (!tab)
		return (NULL);
	len = ft_len(n);
	tab[len--] = '\0';
	if (n == 0)
	{
		tab[len] = n + '0';
		return (tab);
	}
	if (n < 0)
	{
		tab[0] = '-';
		b = n * -1;
	}
	else
		b = n;
	ft_cpy(len, b, tab);
	return (tab);
}
