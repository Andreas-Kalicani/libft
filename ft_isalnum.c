/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:54:42 by andreasgjer       #+#    #+#             */
/*   Updated: 2023/10/09 17:58:42 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	while (c)
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
