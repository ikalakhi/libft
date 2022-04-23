/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:03:41 by ikalakhi          #+#    #+#             */
/*   Updated: 2021/12/13 20:03:36 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*stor;
	size_t	f;
	size_t	r;

	stor = 0;
	if (s1 != '\0' && set != '\0')
	{
		f = 0;
		r = ft_strlen(s1);
		while (s1[f] && ft_strchr(set, s1[f]))
			f++;
		while (s1[r - 1] && ft_strchr(set, s1[r - 1]) && r > f)
			r--;
		stor = (char *)malloc (sizeof(char) * (r - f + 1));
		if (stor)
			ft_strlcpy (stor, &s1[f], r - f + 1);
	}
	return (stor);
}
