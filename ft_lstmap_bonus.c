/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 16:13:26 by zmartine          #+#    #+#             */
/*   Updated: 2022/04/15 17:12:47 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
* Iterates the 'lst' list and applies the 'f' function to the
   content of each node. Create a resulting list
   of the correct and successive application of the function
   'f' over each node. The 'del' function is used
   to remove the contents of a node, if you do
   lack.
* Parameter 'lst' is the pointer of the node.
* Parameter 'f' is the address of a pointer to a function used
   in the iteration of each element of the list.
* Parameter 'del' is a pointer to the function
   to delete the contents of the node.
* Set NULL if memory allocation fails.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux1;
	t_list	*aux2;

	if (!*f && !*del && !lst)
		return (NULL);
	aux1 = NULL;
	while (lst)
	{
		aux2 = ft_lstnew((*f)(lst->content));
		if (aux2 == NULL)
		{
			ft_lstclear(&aux1, del);
			return (NULL);
		}
		ft_lstadd_back(&aux1, aux2);
		lst = lst->next;
	}
	return (aux1);
}
