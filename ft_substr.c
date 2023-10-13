/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:31:09 by akalican          #+#    #+#             */
/*   Updated: 2023/10/13 14:18:24 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substring;
	char		*dest;
	const char	*src;

	if (!s || len == 0)
		return (NULL);
	substring = (char *)malloc(len + 1);
	if (!substring)
	{
		return (NULL);
	}
	dest = substring;
	src = s;
	while (start > 0 && *src)
	{
		src++;
		start--;
	}
	while (len > 0 && *src)
	{
		*dest++ = *src++;
		len--;
	}
	*dest = '\0';
	return (substring);
}
