/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:20:49 by andreasgjer       #+#    #+#             */
/*   Updated: 2023/10/08 19:08:02 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strrchar(const char *str, int c)
{
    const char *last = NULL; 

    while(*str != '\0')
    {
        if(str == (char)c)
        {
            last = str;
        }
        str++;
    }
    return (char *)last;
}