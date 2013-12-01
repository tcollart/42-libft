/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <tcollart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/03 23:39:01 by tcollart          #+#    #+#             */
/*   Updated: 2014/02/04 00:14:08 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplits(char const *s, char *c)
{
	char	**str;
	int		i;
	int		j;

	if (s == NULL || !(str = ft_memalloc(ft_strlen(s) + 1)))
		return (NULL);
	i = 0;
	str[i] = ft_memalloc(ft_strlen(s) + 1);
	while (*s && (str[i] = ft_memalloc(ft_strlen(s) + 1)))
	{
		str[i] = ft_memalloc(ft_strlen(s) + 1);
		j = 0;
		if (*s != c[0] && *s != c[1])
		{
			str[i] = ft_memalloc(ft_strlen(s) + 1);
			while (*s && *s != c[0] && *s != c[1])
				str[i][j++] = *s++;
			str[i++][j] = '\0';
		}
		if (str[i] && *s)
			s++;
	}
	str[i] = '\0';
	return (str);
}
