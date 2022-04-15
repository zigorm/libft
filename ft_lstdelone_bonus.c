/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:50:36 by zmartine          #+#    #+#             */
/*   Updated: 2022/04/15 15:50:40 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
* Take an 'lst' node and release the
   memory of the content using the 'del' function, and frees the node. The
   memory of 'next' should not be freed..
* Parameter 'lst' is the pointer address of the node to release.
* Parameter 'del' is a pointer to the function
   to delete the contents of the node.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
