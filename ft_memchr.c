/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:56:39 by jrossett          #+#    #+#             */
/*   Updated: 2021/11/26 12:02:07 by jrossett         ###   ########.fr       */
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

/*
#include <stdio.h>
#include <string.h>
int main()
{
	const char	*str = "jsuis jules";
	const char	*str2 = "jesauis julesa";
	int			i;
	int n;

	i = 0;
	n = 0;
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	char s2[] = {0, 1, 2 ,3 ,4 ,5};

	memchr(s, 2 + 256, 3);
	ft_memchr(s2, 2 + 256, 3);
	while (i < 6)
	{
		printf("%d\n", s[i]);
		i++;
	}
	while (n < 6)
	{
		printf("%d\n", s[n]);
		n++;
	}
	return (0);
} */