/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 17:33:30 by Fayel-ha          #+#    #+#             */
/*   Updated: 2020/05/18 15:45:42 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if (ft_isalpha(c) > 0 || ft_isdigit(c) > 0)
		return (1);
	else
		return (0);
}
