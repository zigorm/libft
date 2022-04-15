/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:50:06 by zmartine          #+#    #+#             */
/*   Updated: 2022/04/15 15:50:10 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
* Create a new 'node' to the end of the list.
* Parameter 'lst' is the pointer address to the first node in the list.
* Parameter 'new' is the pointer to the new node.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*end;

	if (!(*lst))
		*lst = new;
	else
	{
		end = ft_lstlast(*lst);
		end->next = new;
	}	
}
