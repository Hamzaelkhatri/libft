/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 17:46:37 by helkhatr          #+#    #+#             */
/*   Updated: 2019/10/29 15:58:00 by helkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int		lenght_int(long n)
{
	size_t	i;

	i = 1;
	if (n < 0)
		n *= (-1);
	while (n >= 10)
	{
		i += 1;
		n /= 10;
	}
	return (i);
}

static char				*ft_malloc(int n, int nbitem)
{
	char *tmp;

	if (n < 0)
		tmp = (char *)ft_calloc(nbitem + 2, sizeof(char));
	else
		tmp = (char *)ft_calloc(nbitem + 1, sizeof(char));
	if (tmp == NULL)
		return (NULL);
	return (tmp);
}

char					*ft_itoa(int n)
{
	long			nb;
	char			*tmp;
	int				sign;
	unsigned int	i;

	nb = n;
	sign = 0;
	i = lenght_int(nb);
	tmp = ft_malloc(n, i);
	if (tmp == NULL)
		return (NULL);
	if (n < 0)
	{
		tmp[0] = '-';
		nb = nb * (-1);
		sign = 1;
	}
	tmp[i] = '\0';
	while (i > 0)
	{
		tmp[i + sign - 1] = (nb % 10) + '0';
		nb /= 10;
		i--;
	}
	return (tmp);
}
