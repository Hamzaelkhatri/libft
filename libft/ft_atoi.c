/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 04:32:54 by helkhatr          #+#    #+#             */
/*   Updated: 2019/10/25 19:38:22 by helkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		operation(const char *str, int i, int l, int sign)
{
	int r;

	r = 0;
	while (str[i] != '\0' && str[i] <= 57 && str[i] >= 48)
	{
		r = r * 10 + str[i] - '0';
		i++;
		l++;
	}
	if (l > 19)
	{
		if (sign == 1)
			return (-1);
		else
			return (0);
	}
	return (sign * r);
}

int				ft_atoi(const char *str)
{
	size_t		i;
	int			sign;
	int			l;

	i = 0;
	sign = 1;
	l = 0;
	while (str[i] == '\n' || str[i] == '\v' || str[i] == '\t' ||
			str[i] == '\r' || str[i] == ' ' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (operation(str, i, l, sign));
}
