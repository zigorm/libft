/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:41:40 by zmartine          #+#    #+#             */
/*   Updated: 2022/04/11 11:13:33 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* #include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c);

int	main(void)
{
	char	dest[] = "tripouille";
	char	d = 't';

	printf("%s\n", ft_strchr(dest, d + 256));
	printf("%s\n", strchr(dest, d + 256));
	return (0);
} */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char) c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (unsigned char) c)
		return ((char *)&s[i]);
	return (NULL);
}
