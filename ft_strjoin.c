/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:00:49 by teambersaw        #+#    #+#             */
/*   Updated: 2021/11/30 16:56:06 by jrossett         ###   ########.fr       */
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
	while (s1[++i])
		tab[j++] = s1[i];
	i = -1;
	while (s2[++i])
		tab[j++] = s2[i];
	tab[j] = 0;
	return (tab);
}

/*
#include <stdio.h>

int main(int argc, char **argv)
{
    (void) argc;
    printf("\n%s\n", ft_strjoin(argv[1], argv[2]));
    return (0);
}*/