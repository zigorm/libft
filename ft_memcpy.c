/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 19:10:35 by zmartine          #+#    #+#             */
/*   Updated: 2022/04/03 17:07:17 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* #include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

int	main(void)
{
	const char	src[] = "casa del caracol";
	char		dst[] = "zigor";

	printf("Before memcpy dst = %s\n", dst);
	ft_memcpy(dst, src, 8);
	printf("After memcpy dst = %s\n", dst);
	return (0);
} */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return ((void *)dst);
}
