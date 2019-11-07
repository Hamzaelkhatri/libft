/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:34:30 by helkhatr          #+#    #+#             */
/*   Updated: 2019/10/30 10:06:53 by helkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void const *scr, size_t n)
{
	int					i;
	char				*destmp;
	const unsigned char	*srctmp;

	destmp = dest;
	srctmp = scr;
	i = 0;
	if (dest == NULL && scr == NULL)
	{
		return (NULL);
	}
	while (0 < n)
	{
		destmp[i] = srctmp[i];
		n--;
		i++;
	}
	return (destmp);
}
