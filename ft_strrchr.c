/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:20:49 by andreasgjer       #+#    #+#             */
/*   Updated: 2023/10/09 15:59:36 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *str, int c)
{
	const char	*last = NULL;

	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			last = str;
		}
		str++;
	}
	return ((char *)last);
}
