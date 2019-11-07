/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 18:13:21 by helkhatr          #+#    #+#             */
/*   Updated: 2019/10/24 21:42:39 by helkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t				i;
	const unsigned char	*tempsrc1;
	const unsigned char	*tempsrc2;

	tempsrc2 = str2;
	tempsrc1 = str1;
	i = 0;
	while (i < n)
	{
		if (tempsrc1[i] != tempsrc2[i])
		{
			return (tempsrc1[i] - tempsrc2[i]);
		}
		i++;
	}
	return (0);
}
