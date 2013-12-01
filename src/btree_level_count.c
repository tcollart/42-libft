/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <tcollart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/07 01:51:37 by tcollart          #+#    #+#             */
/*   Updated: 2014/02/07 02:31:22 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		btree_level_count(t_btree *root)
{
	int	r;
	int	l;

	r = 1;
	l = 1;
	if (root == NULL)
	{
		return (0);
	}
	else
	{
		r += btree_level_count(root->right);
		l += btree_level_count(root->left);
		if (r > l)
		{
			return (r);
		}
		else
		{
			return (l);
		}
	}
}
