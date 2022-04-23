/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:16:52 by ikalakhi          #+#    #+#             */
/*   Updated: 2021/12/13 20:03:16 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	k;
	char			*t;

	t = (char *)s;
	k = (unsigned char)c;
	if (!t)
		return (NULL);
	i = ft_strlen(t);
	while (i > 0)
	{
		if (t[i] == k)
		{
			return (&t[i]);
		}
		i-- ;
	}
	if (t[i] == k)
	{
		return (&t[i]);
	}
	return (NULL);
}
