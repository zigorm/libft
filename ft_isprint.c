/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:55:58 by zmartine          #+#    #+#             */
/*   Updated: 2022/04/03 17:07:01 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* #include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c);

int	main(void)
{
	printf("%d \n", ft_isprint('&'));
	printf("%d \n", isprint('%'));
} */

int	ft_isprint(int c)
{
	if (!(c >= 32 && c <= 126))
	{
		return (0);
	}
	return (1);
}
