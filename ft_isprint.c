/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:54:50 by andreasgjer       #+#    #+#             */
/*   Updated: 2023/10/09 15:18:00 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NOTE

Need to take a look later
Seems like the code is to long for the nominette.
You will have to refactor the code.
*/
int	ft_isprint(int c)
{
	while (c)
	{
		if (c >= 0 && c <= 176)
		{
			return (1);
		}
		else if (c == ' ')
		{
			return (1);
		}
	}
	return (0);
}
