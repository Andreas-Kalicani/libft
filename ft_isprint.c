/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andreasgjertsenkalicani <andreasgjertse    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:54:50 by andreasgjer       #+#    #+#             */
/*   Updated: 2023/10/02 14:59:46 by andreasgjer      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NOTE

Need to take a look later
Seems like the code is to long for the nominette.
You will have to refactor the code. 
*/
int ft_isprint(int c)
{
     while(c)
    {
        if (c >= 0 && c <= 176)
        {
            return (1); 
        }
        else if ( c == ' ')
        {
            return (1); 
        }
    }
    return (0); 
}
