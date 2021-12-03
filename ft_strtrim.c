/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:01:47 by teambersaw        #+#    #+#             */
/*   Updated: 2021/12/03 11:44:16 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trim(char const *set, char c)
{
	size_t	a;

	a = 0;
	while (set[a])
	{
		if (set[a] == c)
			return (1);
		a++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tab;
	int		start;
	int		end;
	int		i;

	start = 0;
	end = ft_strlen(s1);
	while (trim(set, s1[start]) && s1[start])
		start++;
	while (trim(set, s1[end - 1]) && end > start)
		end--;
	tab = malloc(sizeof(char) * (end - start + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (start < end)
		tab[i++] = s1[start++];
	tab[i] = 0;
	return (tab);
}
