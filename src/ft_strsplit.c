/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 04:34:18 by tcollart          #+#    #+#             */
/*   Updated: 2014/01/03 22:50:50 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
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
		if (*s != c)
		{
			str[i] = ft_memalloc(ft_strlen(s) + 1);
			while (*s && *s != c)
				str[i][j++] = *s++;
			str[i++][j] = '\0';
		}
		if (str[i] && *s)
			s++;
	}
	str[i] = '\0';
	return (str);
}
