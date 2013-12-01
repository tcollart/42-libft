/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <tcollart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 04:21:17 by tcollart          #+#    #+#             */
/*   Updated: 2014/03/08 23:18:30 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if ((str = (char *)malloc(len + 1)) == 0)
		return (NULL);
	while (s && i < len)
	{
		*str = s[start + i];
		str++;
		i++;
	}
	*str = '\0';
	i = 0;
	while (s && i < len)
	{
		str--;
		i++;
	}
	return (str);
}
