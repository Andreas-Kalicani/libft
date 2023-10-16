/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:03:59 by akalican          #+#    #+#             */
/*   Updated: 2023/10/16 11:08:09 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*forward;

	forward = (t_list *)malloc(sizeof(forward));
	if (!forward)
		return (NULL);
	forward->content = content;
	forward->next = NULL;
	return (forward);
}
