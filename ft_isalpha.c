/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:13:01 by andreasgjer       #+#    #+#             */
/*   Updated: 2023/10/10 11:56:35 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(unsigned char str)
{
	while (str)
	{
		if (str >= 'a' && str <= 'z')
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
	return (0);
}