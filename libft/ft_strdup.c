/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:45:53 by helkhatr          #+#    #+#             */
/*   Updated: 2019/10/25 22:02:31 by helkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t		lenght;
	char		*cpy;

	lenght = ft_strlen(str);
	cpy = (char*)malloc(sizeof(char) * (lenght + 1));
	if (cpy == NULL)
	{
		return (NULL);
	}
	lenght = 0;
	while (str[lenght])
	{
		cpy[lenght] = str[lenght];
		lenght++;
	}
	cpy[lenght] = '\0';
	return (cpy);
}
