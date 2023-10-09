/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:01:43 by andreasgjer       #+#    #+#             */
/*   Updated: 2023/10/04 11:34:33 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    unsigned char *dest = (unsigned char *)dst;
    const unsigned char *source = (const unsigned char *)src;
    
    while(n--)
    {
        dest[n] = source[n]; 
    }
    return dest; 
}