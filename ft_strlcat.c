/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:01:10 by andreasgjer       #+#    #+#             */
/*   Updated: 2023/10/06 18:56:15 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t n) {
    size_t i = 0;
    size_t dst_len = 0;
    size_t src_len = 0;

    while (dst[dst_len] != '\0' && dst_len < n)
        dst_len++;

    while (src[src_len] != '\0')
        src_len++;

    size_t space_remaining = (n > dst_len) ? n - dst_len - 1 : 0;

    while (i < space_remaining && src[i] != '\0') {
        dst[dst_len + i] = src[i];
        i++;
    }

    dst[dst_len + i] = '\0';

    return dst_len + src_len;
}