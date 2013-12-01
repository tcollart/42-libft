/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 23:32:42 by tcollart          #+#    #+#             */
/*   Updated: 2014/01/03 22:38:34 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list **alst, void(*del)(void *, size_t))
{
	if (del && *alst)
	{
		(*del)((*alst)->content, (*alst)->content_size);
		ft_memdel((void **) alst);
	}
}
