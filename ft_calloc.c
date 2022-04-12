/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:29:46 by zmartine          #+#    #+#             */
/*   Updated: 2022/04/12 10:45:03 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* #include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t count, size_t size);

int	main(void)
{
	printf("%d", ft_calloc(size_max, size_max));
	calloc(size_max, size_max);
	write(1, "\n", 1);
	return (0);
} */

void	*ft_calloc(size_t count, size_t size)
{
	void	*c;

	c = (void *)malloc(count * size);
	if (!c)
		return (NULL);
	ft_bzero(c, count * size);
	return (c);
}
