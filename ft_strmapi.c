/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 01:32:16 by Fayel-ha          #+#    #+#             */
/*   Updated: 2020/05/18 15:44:34 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*tab;

	i = 0;
	if (!s)
		return (NULL);
	if (!(tab = malloc(sizeof(*tab) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		tab[i] = (f)(i, s[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
