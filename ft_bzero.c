/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:53:14 by andreasgjer       #+#    #+#             */
/*   Updated: 2023/10/03 13:48:21 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;
    while(n--)
    {
        *ptr++ = 0; 
    }
}
