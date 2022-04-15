/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:07:52 by zmartine          #+#    #+#             */
/*   Updated: 2022/04/15 17:15:08 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
* Iterates the 'lst' list and applies the 'f' function to the
   content of each node. 
* Parameter 'lst' is the pointer of the node.
* Parameter 'f' is the address of a pointer to a function used
   in the iteration of each element of the list.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
