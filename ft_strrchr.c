/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 16:11:26 by Fayel-ha          #+#    #+#             */
/*   Updated: 2020/05/18 15:57:21 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*tmp;
	const char	*str;

	i = 0;
	tmp = NULL;
	str = s;
	while (str[i])
	{
		if (str[i] == c)
			tmp = str + i;
		i++;
	}
	if (tmp)
		return ((char *)tmp);
	if (c == '\0')
		return ((char *)str + i);
	else
		return (NULL);
}
