/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teambersaw <teambersaw@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:00:49 by teambersaw        #+#    #+#             */
/*   Updated: 2021/12/03 19:16:44 by teambersaw       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	int		i;
	int		j;

	tab = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!tab)
		return (NULL);
	i = -1;
	j = 0;
	if (s1)
	{
	while (s1[++i])
		tab[j++] = s1[i];
	}
	i = -1;
	if (s2)
	{
	while (s2[++i] && s2)
		tab[j++] = s2[i];
	}
	tab[j] = 0;
	return (tab);
}
