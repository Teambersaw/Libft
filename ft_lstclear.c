/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrossett <jrossett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:52:25 by jrossett          #+#    #+#             */
/*   Updated: 2021/12/03 11:42:06 by jrossett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*v;

	if (lst)
	{
		v = *lst;
		while (v)
		{
			tmp = v->next;
			ft_lstdelone(v, del);
			v = tmp;
		}
		*lst = NULL;
	}
}
