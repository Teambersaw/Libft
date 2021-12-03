/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:38:36 by jrossett          #+#    #+#             */
/*   Updated: 2021/11/26 14:40:13 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>
int main()
{
	char s[] = "tripouille";
	char s2[] = "ltripouiel";
	printf("%s\n", strrchr(s, 't'));
	printf("%s\n", ft_strrchr(s, 't'));
	return (0);
}*/