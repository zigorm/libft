/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:56:45 by zmartine          #+#    #+#             */
/*   Updated: 2022/04/04 16:08:32 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* #include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);

int	main(void)
{
	char	dst[20] = "Mi casa";
	char	src[20] =  "es bonita";
	char	*pru;
	char	*pru2;

	pru = ft_memmove(dst, src, 4);
	printf("%s\n", pru);
	pru2 = memmove(dst, src, 4);
	printf("%s\n", pru2);
	return (0);
} */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (s1 < s2 && (dst || src))
		ft_memcpy(dst, src, len);
	else
	{
		while (len > 0)
		{
			s1[len - 1] = s2[len - 1];
			len--;
		}
	}
	return (dst);
}
