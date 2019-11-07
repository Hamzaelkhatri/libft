/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 16:24:31 by helkhatr          #+#    #+#             */
/*   Updated: 2019/10/24 21:37:15 by helkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	const unsigned char *tsrc;
	unsigned int		j;

	i = 0;
	tsrc = str;
	j = 0;
	while (0 < n)
	{
		if (tsrc[i] == (unsigned char)c)
		{
			return ((unsigned char *)tsrc + i);
		}
		i++;
		n--;
	}
	return (NULL);
}
