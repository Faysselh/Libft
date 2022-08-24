/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 18:00:23 by Fayel-ha          #+#    #+#             */
/*   Updated: 2020/05/18 15:49:30 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_charset(char set, char c)
{
	if (set == c)
		return (1);
	return (0);
}

int		ft_count(char const *s, char c)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (!is_charset(s[i], c))
		{
			while (s[i] && !is_charset(s[i], c))
				i++;
			count++;
			if (!s[i])
				return (count);
		}
		i++;
	}
	return (count);
}

char	*ft_strndup1(char const *s, char c)
{
	char	*tab;
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (s[i] && !is_charset(s[i], c))
		i++;
	if (!(tab = malloc(sizeof(*tab) * (i + 1))))
		return (NULL);
	i = 0;
	while (s[i] && !is_charset(s[i], c))
	{
		tab[n] = s[i];
		n++;
		i++;
	}
	tab[n] = '\0';
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		n;

	n = 0;
	i = 0;
	if (!s)
		return (NULL);
	if (!(tab = malloc(sizeof(char *) * (ft_count(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] && is_charset(s[i], c))
			i++;
		if (s[i] && !is_charset(s[i], c))
		{
			tab[n] = ft_strndup1(s + i, c);
			n++;
			while (s[i] && !is_charset(s[i], c))
				i++;
		}
	}
	tab[n] = 0;
	return (tab);
}
