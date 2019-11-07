/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 16:20:06 by helkhatr          #+#    #+#             */
/*   Updated: 2019/10/30 16:42:57 by helkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	if (n == 0)
		return (0);
	while (0 < n && (*str1 != '\0' || *str2 != '\0'))
	{
		if ((unsigned char)*str1 != (unsigned char)*str2)
		{
			return ((unsigned char)*str1 - (unsigned char)*str2);
		}
		n--;
		str1++;
		str2++;
	}
	return (0);
}
