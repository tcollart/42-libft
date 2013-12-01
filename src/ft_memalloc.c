/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <tcollart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 01:10:41 by tcollart          #+#    #+#             */
/*   Updated: 2014/01/03 22:39:26 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		*ft_memalloc(size_t size)
{
	void	*ptr;

	if (size && (ptr = malloc(size)) != 0)
		ft_memset(ptr, '\0', size);
	else
		return (NULL);
	return (ptr);
}
