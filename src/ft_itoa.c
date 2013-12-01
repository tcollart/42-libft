/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 23:51:36 by tcollart          #+#    #+#             */
/*   Updated: 2014/01/03 22:36:04 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		m;

	if (n == 0)
		return (ft_strdup("0"));
	m = 0;
	if (n > 0)
	{
		n = -n;
		m = 1;
	}
	str = (m) ? (char *)malloc(ft_nbrlen(n)) : (char *)malloc(ft_nbrlen(n) + 1);
	if (!str)
		return (NULL);
	while (*++str)
		;
	while (n)
	{
		*--str = -(n % 10) + 48;
		n /= 10;
	}
	if (!m)
		*--str = '-';
	return (ft_strdup(str));
}
