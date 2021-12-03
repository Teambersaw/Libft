/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 19:14:03 by teambersaw        #+#    #+#             */
/*   Updated: 2021/11/30 16:55:48 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;

	i = 0;
	if (little == NULL || ft_strlen(little) == 0)
		return ((char *)big);
	if (ft_strlen(little) > len)
		return (NULL);
	while (i < len && big[i])
	{
		if (ft_strncmp((char *)&big[i], little, ft_strlen(little)) == 0)
		{
			if (i + ft_strlen(little) > len)
				return (NULL);
			return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

//#include <stdio.h>
//
//int main()
//{
//    char big[] = "lorem ipsum dolor sit amet";
//    char little[] = "";
//    printf("\n%s\n", ft_strnstr(big, "ipsum", 15));
//    return (0);
//}