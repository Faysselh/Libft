/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 15:48:23 by Fayel-ha          #+#    #+#             */
/*   Updated: 2020/05/18 16:05:26 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int			i;
	const char	*s1;

	i = 0;
	s1 = s;
	while (s1[i])
	{
		if (s1[i] == c)
			return ((char *)s + i);
		i++;
	}
	if (s1[i] == c)
		return ((char *)s + i);
	else
		return (NULL);
}
