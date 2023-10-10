/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:00:38 by andreasgjer       #+#    #+#             */
/*   Updated: 2023/10/10 13:17:45 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned    char	*ptr;

	ptr = (unsigned char *)b;
	while (len--)
	{
		*ptr++ = (unsigned char)c;
	}
	return (b);
}
