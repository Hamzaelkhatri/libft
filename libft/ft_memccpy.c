/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:00:29 by helkhatr          #+#    #+#             */
/*   Updated: 2019/10/24 17:47:45 by helkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*dstmp;
	const unsigned char *srctmp;
	unsigned char		ctmp;

	i = 0;
	dstmp = dest;
	srctmp = src;
	ctmp = c;
	while (0 < n)
	{
		dstmp[i] = srctmp[i];
		i++;
		if (dstmp[i - 1] == ctmp)
			return (dstmp + i);
		n--;
	}
	return (NULL);
}
