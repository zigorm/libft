/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 17:51:16 by zmartine          #+#    #+#             */
/*   Updated: 2022/04/03 19:45:30 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* #include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t	ft_strlen(const char *s);

int	main(void)
{
	char	*dest;
	char	*orig;

	dest = "caracolilla";
	orig = "caraco";
	printf("%s\n", ft_strnstr(dest, orig, 5));
	printf("%s\n", strnstr(dest, orig, 5));
	return (0);
} */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*result;

	result = (char *)haystack;
	j = 0;
	if (ft_strlen(needle) == 0)
		return (result);
	while (result[j] != '\0' && len >= ft_strlen(needle))
	{
		i = 0;
		while (result[j + i] == needle[i]
			&& result[j + i] != '\0' && needle[i] != '\0')
			i++;
		if (needle[i] == '\0')
			return (&result[j]);
		j++;
		len--;
	}
	return (NULL);
}

/* size_t	ft_strlen(const char *s)
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
 */