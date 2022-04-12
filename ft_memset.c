/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:11:13 by zmartine          #+#    #+#             */
/*   Updated: 2022/04/03 17:07:36 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* #include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len);

int	main(void)
{
	char	b[] = "Casa de caracol";
	int		c = '5';

	printf("%s \n", ft_memset(b, c, 4));
	printf("%s \n", memset(b, c, 4));
	return (0);
} */

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*test;

	test = (unsigned char *) b;
	i = 0;
	while (i < len)
	{
		test[i] = c;
		i++;
	}
	return ((void *)b);
}
