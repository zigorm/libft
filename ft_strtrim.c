/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:00:52 by zmartine          #+#    #+#             */
/*   Updated: 2022/04/14 17:59:56 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "lorem \n ipsum \t dolor \n sit \t amet";
	char	a[] = " ";
	printf("%s", ft_strtrim(str, a));

} */

static size_t	trimstart(char const *set, char const	*trim)
{
	size_t	start;
	int		found;

	start = 0;
	found = 0;
	while (trim[start] && found == 0)
	{
		if (ft_strchr(set, trim[start]) == 0)
			return (start);
		start++;
	}
	return (start);
}

static size_t	trimend(char const *set, char const	*trim)
{
	size_t	length;
	size_t	end;
	int		found;

	length = ft_strlen(trim);
	end = 0;
	found = 0;
	while (end < length)
	{
		if (ft_strchr(set, trim[length - end - 1]) == 0)
			return (end);
		end++;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	length;
	char	*s;

	if (!s1 || !set)
		return (NULL);
	length = ft_strlen(s1);
	start = trimstart(set, s1);
	end = length - trimend(set, s1);
	if (start < end)
		return (ft_substr(s1, start, end - start));
	s = malloc(1);
	s[0] = '\0';
	return (s);
}
