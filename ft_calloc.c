/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:29:46 by zmartine          #+#    #+#             */
/*   Updated: 2022/04/14 13:46:57 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* #include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t count, size_t size);

int	main(void)
{
	printf("%s", ft_calloc(SIZE_MAX, SIZE_MAX));
	// calloc(SIZE_MAX, SIZE_MAX);
	write(1, "\n", 1);
	return (0);
} */

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = (void *)malloc(count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}
