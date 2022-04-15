/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:49:55 by zmartine          #+#    #+#             */
/*   Updated: 2022/04/15 16:50:21 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
* Remove and free the given 'lst' node and all
   consecutive from that node, using the function
   'del' and free.
   At the end, the pointer to the list must be NULL.
* Parameter 'lst' is the pointer address of the node to release.
* Parameter 'del' is a pointer to the function
   to delete the contents of the node.
*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	if (lst)
	{
		while (*lst)
		{
			aux = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = aux;
		}
	}
}
