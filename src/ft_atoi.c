/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcollart <tcollart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 02:44:29 by tcollart          #+#    #+#             */
/*   Updated: 2014/01/03 22:36:04 by tcollart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *nptr)
{
	int	nb;
	int	i;
	int	sign;

	sign = 1;
	nb = 0;
	i = 0;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n' || *nptr == '\v'
			|| *nptr == '\f' || *nptr == '\r')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
		i++;
	}
	while (*nptr >= 48 && *nptr < 58)
	{
		nb = nb * 10 + (*nptr - 48);
		nptr++;
	}
	return ((nb) * sign);
}
