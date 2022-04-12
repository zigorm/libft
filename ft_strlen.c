/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:48:24 by zmartine          #+#    #+#             */
/*   Updated: 2022/04/03 17:08:13 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* #include <stdio.h>

size_t	ft_strlen(const char *s);

int	main(void)
{
	char	*s;

	s = "Hola world";
	printf("%zu", ft_strlen(s));
} */

size_t	ft_strlen(const char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		count++;
		s++;
	}
	return (count);
}
