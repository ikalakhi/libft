/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:20:52 by ikalakhi          #+#    #+#             */
/*   Updated: 2021/12/13 18:08:40 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	ca;
	unsigned char	*p;
	size_t			l;

	ca = (unsigned char)c;
	p = (unsigned char *)s;
	l = 0;
	while (l < len)
	{
		p[l] = ca;
		l ++;
	}
	return (p);
}
