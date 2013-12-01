/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <tcollart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/07 01:09:27 by tcollart          #+#    #+#             */
/*   Updated: 2014/02/07 01:42:26 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	btree_insert_data(t_btree **root, void *el, int (*cmpf)(void *, void*))
{
	if (*root == NULL)
	{
		*root = btree_create_node(el);
		return ;
	}
	if (cmpf((*root)->item, el) > 0)
	{
		btree_insert_data(&((*root)->left), el, cmpf);
	}
	else
	{
		btree_insert_data(&((*root)->right), el, cmpf);
	}
}
