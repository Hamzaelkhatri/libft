/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 16:37:58 by helkhatr          #+#    #+#             */
/*   Updated: 2019/10/30 12:36:27 by helkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t len;
	size_t j;

	j = 0;
	len = ft_strlen(src);
	i = ft_strlen(dest);
	if (n <= i)
		return (len + n);
	n = n - i;
	while (*dest)
		dest++;
	while (1 < n && *src)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (len + i);
}
