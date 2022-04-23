/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:48:18 by ikalakhi          #+#    #+#             */
/*   Updated: 2021/12/13 18:06:09 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*f;
	unsigned char	*s;
	size_t			i;

	f = (unsigned char *)s1;
	s = (unsigned char *)s2;
	i = 0;
	while (n > 0)
	{
		if (f[i] != s[i])
		{
			return (f[i] - s[i]);
		}
		i++;
		n--;
	}
	return (0);
}
