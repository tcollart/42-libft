/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 23:36:33 by tcollart          #+#    #+#             */
/*   Updated: 2014/02/07 03:17:03 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*iter;
	t_list	before_first;

	iter = &before_first;
	while (lst)
	{
		iter->next = f(lst);
		if (iter->next == NULL)
			return (NULL);
		lst = lst->next;
		iter = iter->next;
	}
	return (before_first.next);
}
