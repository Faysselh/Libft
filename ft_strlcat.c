/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Fayel-ha <Fayel-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 23:20:38 by Fayel-ha          #+#    #+#             */
/*   Updated: 2020/05/09 23:37:52 by Fayel-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t n;
	size_t j;

	i = 0;
	n = 0;
	j = 0;
	while (dst[n])
		n++;
	while (src[i])
		i++;
	if (n >= dstsize)
		return (i + dstsize);
	while (n + j < dstsize - 1 && src[j])
	{
		dst[n + j] = src[j];
		j++;
	}
	dst[n + j] = '\0';
	return (i + n);
}
