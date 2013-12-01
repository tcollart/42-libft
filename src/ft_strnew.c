/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <tcollart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 04:00:59 by tcollart          #+#    #+#             */
/*   Updated: 2014/01/03 22:48:13 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if ((str = (char *) malloc(size)) != 0)
	{
		if (size)
		{
			while (i <= size)
			{
				str[i] = '\0';
				i++;
			}
			return (str);
		}
		*str = '\0';
		return (str);
	}
	return (NULL);
}
