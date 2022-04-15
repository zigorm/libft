/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 18:41:02 by zmartine          #+#    #+#             */
/*   Updated: 2022/04/15 19:15:01 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sameletters(char const *s, char c)
{
	int	coin;
	int	i;

	i = 0;
	coin = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			coin++;
		while (s[i] != c && s[i])
			i++;
	}
	return (coin);
}

char	**ft_split_aux(char const *s, char c)
{
	int		len;
	int		i;
	int		start;
	int		coin;
	char	**str;

	coin = 0;
	i = -1;
	start = -1;
	len = ft_strlen(s);
	str = (char **) malloc(sizeof(char *) * (ft_sameletters(s, c) + 1));
	if (str == NULL || sizeof(str) == 0)
		return (NULL);
	while (++i <= len)
	{
		if (s[i] != c && start < 0)
			start = i;
		else if (start >= 0 && (s[i] == c || i == len))
		{
			str[coin++] = ft_substr(s, start, i - start);
			start = -1;
		}	
	}
	str[coin] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (ft_split_aux(s, c));
}

/* int	main(void)
{
	char const	s[]	= "guapalipallapa"

	printf("%s\n", ft_split(s, 'p')[0]);
	printf("%s\n", ft_split(s, 'p')[1]);
	printf("%s\n", ft_split(s, 'p')[2]);
	return (0);
} */
