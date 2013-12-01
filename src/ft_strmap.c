/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <tcollart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 04:14:23 by tcollart          #+#    #+#             */
/*   Updated: 2014/01/03 22:46:32 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	i = 0;
	if (f && (str = (char *) malloc(ft_strlen(s))) != 0)
	{
		while (f && *s)
		{
			str[i] = (*f)(*s);
			i++;
			s++;
		}
		*(str + i) = '\0';
		return (str);
	}
	return (NULL);
}
