/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:08:09 by andreasgjer       #+#    #+#             */
/*   Updated: 2023/09/12 15:36:11 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
    while(c)
    {
        if (c >= 48 && c <= 57)
        {
            return (1);
        }
        else
        {
            return (0);
        }
    }
    return 0;
}
