/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:19:00 by zmartine          #+#    #+#             */
/*   Updated: 2022/04/11 11:38:15 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* #include <stdio.h>

char	*ft_strdup(const char *s1);

int	main(void)
{
	char	dest[] = "La casa de Juan";

	printf("%s\n", ft_strdup(dest));
	printf("%s\n", strdup(dest));
	return (0);
} */

char	*ft_strdup(const char *s1)
{
	int		i;
	int		count;
	char	*dest;

	count = 0;
	i = 0;
	while (s1[count])
		count++;
	dest = malloc(sizeof(char) * (count + 1));
	if (!dest)
		return (NULL);
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
