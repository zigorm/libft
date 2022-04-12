/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:13:32 by zmartine          #+#    #+#             */
/*   Updated: 2022/04/12 10:54:16 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* #include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	main(void)
{
	char	s1[] = "tripouville";

	printf("%s", ft_substr(s1, 0, 42000));
} */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (len > strlen(s))
		len = strlen(s);
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str || !s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
