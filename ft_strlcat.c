/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:01:10 by andreasgjer       #+#    #+#             */
/*   Updated: 2023/10/10 13:15:40 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t n)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	space_remaining;

	i = 0;
	dst_len = 0;
	src_len = 0;
	while (dst[dst_len] != '\0' && dst_len < n)
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	space_remaining = 0;
	if (n > dst_len)
		space_remaining = n - dst_len - 1;
	while (i < space_remaining && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
