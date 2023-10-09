/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:00:33 by andreasgjer       #+#    #+#             */
/*   Updated: 2023/10/05 14:46:07 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t i;

    i = 0; 
    if (dstsize == 0)
    {
        while(src[i])
        {
            i++;
        }
          return (i);
    }

        while (i < dstsize - 1 && src[i] != '\0')
        {
            dst[i] = src[i];
            i++;
        }
        if (i < dstsize)
            dst[i] = '\0';
        while(src[i] != '\0')
                i++;
            return (i);
}