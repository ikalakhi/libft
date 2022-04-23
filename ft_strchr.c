/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:07:01 by ikalakhi          #+#    #+#             */
/*   Updated: 2021/12/13 18:31:05 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ss;

	ss = (char *)s;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (&ss[i]);
		i++ ;
	}
	if (s[i] == (char)c)
		return (&ss[i]);
	return (NULL);
}
