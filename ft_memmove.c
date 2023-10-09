/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:34:06 by andreasgjer       #+#    #+#             */
/*   Updated: 2023/10/05 13:35:28 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;
    if(d == s || len == 0)
    {
        return (dst);
    }
    if (d < s || d >= s + len)
    {
        while(len--)
        {
            *d++ = *s++;
        }
    } else {
        d += len;
        s += len; 
        while(len--)
        {
            *(d--) = *(s--);
        }
    }
    return (d); 
}