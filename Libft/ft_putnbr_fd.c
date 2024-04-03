/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:50:34 by pportill          #+#    #+#             */
/*   Updated: 2024/04/03 18:10:22 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

char	*ft_itoa(int n);

static size_t	ft_count(int n)
{
	size_t	cont;

	cont = 0;
	if (n < 0)
	{
		cont++;
		n *= -1;
	}
	while (n % 10 > 0)
	{
		cont++;
		n = n / 10;
	}
	return (cont);
}

void	ft_putnbr_fd(int n, int fd)
{
	size_t	cont;

	cont = ft_count(n);
	write(fd, ft_itoa(n), cont);
}
