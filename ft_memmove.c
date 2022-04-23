/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:58:44 by ikalakhi          #+#    #+#             */
/*   Updated: 2021/12/13 18:07:18 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*from;
	unsigned char	*to;
	size_t			l;

	from = (unsigned char *)src;
	to = (unsigned char *)dst;
	l = 1;
	if (to > from)
	{
		while (l <= len)
		{
			to[len - l] = from[len - l];
			l++ ;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (to);
}
