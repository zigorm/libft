/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:40:53 by zmartine          #+#    #+#             */
/*   Updated: 2022/04/03 17:06:08 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* #include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n);

int	main(void)
{
	char	text[] = "buho";

	ft_bzero(text, 2);
	printf("%s \n", text);
	printf("%s \n", bzero(text, 2));
	return (0);
} */

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*aux;

	aux = (char *) s;
	i = 0;
	while (i < n)
	{
		aux[i] = 0;
		i++;
	}
}
