/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:31:47 by zmartine          #+#    #+#             */
/*   Updated: 2022/04/11 11:14:05 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* #include <stdio.h>
#include <string.h>
#include <stddef.h>

char	*ft_strrchr(const char *s, int c);
size_t	ft_strlen(const char *str);

int	main(void)
{
	char	aux[] = "th\0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	char	d = '\0';

	printf("%s\n", ft_strrchr(aux, d));
	printf("%s\n", strrchr(aux, d));
	return (0);
} */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char) c)
		{
			return ((char *)&(s[i]));
		}
		i--;
	}
	return (NULL);
}

/* size_t	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
} */
