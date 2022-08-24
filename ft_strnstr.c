/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 23:45:37 by Fayel-ha          #+#    #+#             */
/*   Updated: 2020/05/18 16:28:13 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;
	char	*crf;

	i = 0;
	n = 0;
	if (needle[n] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		n = 0;
		crf = (char *)&haystack[i];
		while (haystack[i + n] == needle[n] && (i + n) < len)
		{
			n++;
			if (needle[n] == '\0')
				return (crf);
		}
		i++;
	}
	return (NULL);
}
