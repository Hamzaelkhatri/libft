/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:10:57 by helkhatr          #+#    #+#             */
/*   Updated: 2019/10/29 14:40:33 by helkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned int nitems, unsigned int size)
{
	int		i;
	char	*d;
	int		k;

	k = 0;
	i = 0;
	d = (char *)malloc(size * nitems);
	if (d == NULL)
	{
		return (NULL);
	}
	i = size * nitems;
	while (i > k)
	{
		d[k] = '\0';
		k++;
	}
	return (d);
}
