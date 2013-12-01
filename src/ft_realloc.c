/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/07 21:59:47 by tcollart          #+#    #+#             */
/*   Updated: 2014/02/04 00:10:08 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void				*ft_realloc(void *ptr, size_t size)
{
	void			*new;

	if (!ptr)
		return (malloc(size));
	if (!size)
		return (ptr);
	if (!(new = malloc(size)))
		return (NULL);
	ft_memcpy(new, ptr, size);
	if (ptr)
	{
		free(ptr);
		ptr = NULL;
	}
	return (new);
}
