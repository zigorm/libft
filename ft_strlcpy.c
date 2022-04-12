/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:35:01 by zmartine          #+#    #+#             */
/*   Updated: 2022/04/03 17:07:56 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* #include <stdio.h>
#include <unistd.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

int	main(void)
{
	char			src[] = "Zigor";
	char			dst[] = "Martinez";
	size_t	dstsize;

	printf("%s \n", src);
	printf("%s \n", dst);
	dstsize = ft_strlcpy(dst, src, 8);
	printf("%zu \n", dstsize);
	write(1, dst, 8);
	return (0);
} */

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	cont;
	size_t	i;

	cont = 0;
	i = 0;
	while (src[cont] != '\0')
		cont++;
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (cont);
}
