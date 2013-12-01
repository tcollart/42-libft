/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <tcollart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/07 01:26:18 by tcollart          #+#    #+#             */
/*   Updated: 2014/02/07 02:51:54 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*btree_search_item(t_btree *root, void *dt, int (*cmpf)(void *, void *))
{
	if (root)
	{
		btree_search_item(root->left, dt, cmpf);
		if (cmpf(root->item, dt) == 0)
			return (dt);
		btree_search_item(root->right, dt, cmpf);
	}
	return (NULL);
}
