/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:57:10 by ikalakhi          #+#    #+#             */
/*   Updated: 2021/12/13 18:00:18 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*from;
	unsigned char	*to;
	size_t			l;

	if (!dst && !src)
		return (NULL);
	from = (unsigned char *)src;
	to = (unsigned char *)dst;
	l = 0;
	while (l < n)
	{
		to[l] = from[l];
		l++ ;
	}
	return (to);
}
