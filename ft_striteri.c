/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 11:14:36 by zmartine          #+#    #+#             */
/*   Updated: 2022/04/13 11:18:03 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	f(unsigned int a, char *c);

int	main(void)
{
	char	c[] = "hola";

	ft_striteri(c, f);
}

void	f(unsigned int a, char *c)
{
	printf("%d", a);
	printf("%s", c);
} */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
