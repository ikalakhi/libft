/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 06:17:19 by ikalakhi          #+#    #+#             */
/*   Updated: 2021/12/13 18:55:29 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s;
	size_t	d;
	size_t	i;
	size_t	j;

	if (!dst && !dstsize)
		return (ft_strlen(src));
	s = ft_strlen(src);
	d = ft_strlen(dst);
	i = 0;
	j = 0;
	if (dstsize < d || dstsize == 0)
		return (s + dstsize);
	while (src[j] != '\0' && (d + i) < dstsize - 1)
	{
		dst[d + i] = src[j];
		j++;
		i++;
	}
	dst[d + i] = '\0';
	return (s + d);
}
