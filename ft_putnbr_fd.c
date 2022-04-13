/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmartine <zmartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:29:05 by zmartine          #+#    #+#             */
/*   Updated: 2022/04/13 11:04:12 by zmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	i;

	i = n;
	if (0 > i)
	{
		write(fd, "-", 1);
		i = -i;
	}
	if (i >= 10)
	{
		ft_putnbr_fd(i / 10, fd);
	}
	ft_putchar_fd((i % 10) + '0', fd);
}
