/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 17:03:26 by helkhatr          #+#    #+#             */
/*   Updated: 2019/10/30 16:22:17 by helkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t c;

	i = 0;
	if (s2[i] == '\0')
		return ((char *)s1);
	while (n > i && s1[i] != '\0')
	{
		c = 0;
		if (s1[i] == s2[c])
		{
			while (s1[i + c] == s2[c] && s2[c] && c + i < n)
				c++;
			if (s2[c] == '\0')
				return ((char*)s1 + i);
		}
		i++;
	}
	return (NULL);
}
