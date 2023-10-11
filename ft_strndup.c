/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:16:25 by akalican          #+#    #+#             */
/*   Updated: 2023/10/11 15:35:06 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strndup(const char *s1, size_t n)
{
	char	*str;

	if (!(str = (char *)malloc(n + 1)))
	{
		return (0);
	}
	ft_memcpy(str, s1, n);
	str[n + 1] = 0;
	return (str);
}
