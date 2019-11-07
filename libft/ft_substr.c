/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helkhatr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 21:30:02 by helkhatr          #+#    #+#             */
/*   Updated: 2019/11/03 00:06:40 by helkhatr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	i = 0;
	if (!s || ft_strlen(s) < start)
		return (ft_strdup(""));
	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
	{
		return (ft_strdup(""));
	}
	while (len > 0 && s[start] != '\0')
	{
		str[i] = s[start];
		len--;
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
