/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 02:21:31 by tcollart          #+#    #+#             */
/*   Updated: 2014/01/03 22:50:50 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		l;
	char	*str;
	int		k;

	i = 0;
	j = 0;
	l = 0;
	if (!s || (str = (char*) malloc(ft_strlen(s) + 1)) == 0)
		return (NULL);
	k = ft_strlen(s);
	while ((s[l] == ' ' || s[l] == '\t' || s[l] == '\n') && i++ < k)
		l++;
	while (s[l])
		l++;
	while (j++ < k && (s[l] == ' ' || s[l] == '\t' || s[l] == '\n' || !(s[l])))
		l--;
	j = 0;
	while (i <= l)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
