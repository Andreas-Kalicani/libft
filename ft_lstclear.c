/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:57:46 by akalican          #+#    #+#             */
/*   Updated: 2023/10/16 14:00:54 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*temp2;

	if (!lst || !del)
		return ;
	temp = *lst;
	temp2 = *lst;
	while (temp)
	{
		temp2 = temp2->next;
		del(temp->content);
		temp = temp2;
	}
	*lst = NULL;
}
