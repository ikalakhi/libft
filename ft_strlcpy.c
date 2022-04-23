/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 21:02:19 by ikalakhi          #+#    #+#             */
/*   Updated: 2021/12/13 18:55:52 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	if (destsize < 1)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (destsize - 1))
	{
		dst[i] = src[i];
		i++ ;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
