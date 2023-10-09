/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:54:42 by andreasgjer       #+#    #+#             */
/*   Updated: 2023/09/22 09:41:26 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    while(c)
    {
        if (ft_isalpha(c))
        {
            return (1);
        }
        else if (ft_isdigit(c))
        {
            return (1);
        }
    }
    return (0);
}
