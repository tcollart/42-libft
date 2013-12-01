/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <tcollart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 02:40:59 by tcollart          #+#    #+#             */
/*   Updated: 2014/01/03 22:45:14 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strdup(const char *s)
{
	char	*new;
	int		i;
	int		size_s;

	size_s = ft_strlen(s);
	new = (char *) malloc(size_s);
	new[size_s] = '\0';
	while (*s)
	{
		*new = *s;
		new++;
		s++;
	}
	i = 0;
	while (i < size_s)
	{
		new--;
		i++;
	}
	return (new);
}
