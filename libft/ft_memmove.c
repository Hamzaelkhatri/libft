/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:40:04 by helkhatr          #+#    #+#             */
/*   Updated: 2019/10/30 14:55:17 by helkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t num)
{
	unsigned char		*destmp;
	size_t				i;
	unsigned char		*srctmp;

	if (source == NULL && destination == NULL)
		return (NULL);
	destmp = (unsigned char*)destination;
	srctmp = (unsigned char*)source;
	i = 0;
	if (srctmp < destmp || !(srctmp && destmp))
	{
		while (num-- > 0)
			*(destmp + num) = *(srctmp + num);
	}
	else
		ft_memcpy(destmp, srctmp, num);
	return (destmp);
}
