/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:40:30 by tcollart          #+#    #+#             */
/*   Updated: 2014/01/03 22:45:14 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void				ft_striteri(char *s, void(*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (f && *s)
	{
		(*f)(i, s);
		i++;
		s++;
	}
}
