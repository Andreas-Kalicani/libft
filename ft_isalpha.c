/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:13:01 by andreasgjer       #+#    #+#             */
/*   Updated: 2023/09/12 15:49:06 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int ft_isalpha(unsigned char str)
{
    while(str)
    {
        if(str >= 'a' && str <= 'z')
        {
            return (1);
        }
        if (str >= 'A' && str <= 'Z')
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