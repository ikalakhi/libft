/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikalakhi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 01:24:52 by ikalakhi          #+#    #+#             */
/*   Updated: 2021/12/13 16:23:06 by ikalakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_intlen(int m)
{
	long int	n;
	int			i;

	i = 0;
	n = m;
	if (n <= 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_rev(char *s, long int m, int len)
{
	while (len >= 0 && m > 0)
	{
		s[len] = (m % 10) + '0';
		m /= 10;
		len--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char		*s;
	long int	m;
	int			len;

	m = n;
	len = ft_intlen(m);
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL )
		return (NULL);
	s[len--] = 0;
	if (m == 0)
	{
		s[0] = '0';
		return (s);
	}
	if (m < 0)
	{
		s[0] = '-';
		m = m * -1;
	}
	return (ft_rev(s, m, len));
}
