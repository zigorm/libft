/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:21:31 by zmartine          #+#    #+#             */
/*   Updated: 2022/04/03 19:01:36 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* #include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);

int	main(void)
{
	char		text1[] = "there is no stars in the sky";
	const char	text2[] = "the cake is a lie !\0I'm hidden lol\r\n";

	printf("%zu \n", strlcat(text1, text2, 4));
	printf("%zu \n", ft_strlcat(text1, text2, 4));
	printf("%s \n", text1);
	return (0);
} */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (srclen);
	if (dstsize < dstlen)
		return (srclen + dstsize);
	else
	{		
		while (src[i] && (dstlen + i) < dstsize)
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		if ((dstlen + i) == dstsize && dstlen < dstsize)
			dst[dstlen + i - 1] = '\0';
		else
			dst[dstlen + i] = '\0';
	}		
	return (dstlen + srclen);
}
