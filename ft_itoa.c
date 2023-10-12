/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:04:29 by akalican          #+#    #+#             */
/*   Updated: 2023/10/12 15:24:44 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	get_digits(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char		*string_num;
	size_t		digits;
	long int	num;

	num = n;
	digits = get_digits(n);
	if (n < 0)
	{
		num *= -1;
		digits++;
	}
	if (!(string_num = (char *)malloc(sizeof(char) * (digits + 1))))
		return (NULL);
	*(string_num + digits) = 0;
	while (digits--)
	{
		*(string_num + digits) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(string_num + 0) = '-';
	return (string_num);
}