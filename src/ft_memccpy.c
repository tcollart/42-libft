/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <tcollart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 01:48:26 by tcollart          #+#    #+#             */
/*   Updated: 2014/02/03 23:21:02 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	int				is_c;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	is_c = 0;
	while (n > 0 && !is_c)
	{
		*ptr1 = *ptr2;
		is_c = (*ptr1 == (unsigned char) c);
		++ptr1;
		++ptr2;
		--n;
	}
	if (is_c)
		return (ptr1);
	return (NULL);
}
