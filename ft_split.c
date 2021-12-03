/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teambersaw <teambersaw@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:57:45 by teambersaw        #+#    #+#             */
/*   Updated: 2021/12/03 19:25:48 by teambersaw       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static int	ft_char(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

static int	ft_word(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	if (!s)
		return (0);
	while (s[i] != 0 && ft_char(s[i], c))
		i++;
	while (s[i])
	{
		if ((ft_char(s[i], c) && !ft_char(s[i + 1], c)) || s[i + 1] == '\0')
			word++;
		i++;
	}
	return (word);
}

static int	ft_len(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char *) * (ft_word(s, c) + 1));
	if (!tab)
		return (NULL);
	while ((s != NULL && s[i]) && j < ft_word(s, c))
	{
		k = 0;
		while (s[i] == c && s[i])
			i++;
		tab[j] = malloc(sizeof(char) * (ft_len(s, c, i) + 1));
		if (!tab)
			return (ft_free(tab));
		while (s[i] != c && s[i])
			tab[j][k++] = s[i++];
		tab[j++][k] = '\0';
	}
	tab[j] = NULL;
	return (tab);
}
