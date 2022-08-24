/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 00:31:55 by Fayel-ha          #+#    #+#             */
/*   Updated: 2020/05/17 17:08:49 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int stock;
	int count;

	i = 0;
	stock = 0;
	count = 1;
	while (str[i] >= 7 && (str[i] <= 13 || str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		stock = (stock * 10) + str[i] - 48;
		i++;
	}
	return (stock * count);
}
