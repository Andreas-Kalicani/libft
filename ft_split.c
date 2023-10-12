/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:03:12 by akalican          #+#    #+#             */
/*   Updated: 2023/10/12 14:04:19 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	if (!*str)
	{
		return (0);
	}
	while (str[i] && str[i] == c)
	{
		i++;
	}
	count = 0;
	while (str[i] && str[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	size_t	len;
	int		i;

	list = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	i = 0;
	if (!s || !list)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			list[i++] = ft_substr(s, 0, len);
			s += len;
		}
	}
	list[i] = NULL;
	return (list);
}