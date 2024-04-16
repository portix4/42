/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:00:34 by pportill          #+#    #+#             */
/*   Updated: 2024/04/16 16:28:52 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	signo;
	int	n;
	int	cont;

	signo = 1;
	n = 0;
	cont = 0;
	while (str[cont] == ' ' || str[cont] == '\t' || str[cont] == '\n'
		|| str[cont] == '\v' || str[cont] == '\f' || str[cont] == '\r')
		cont++;
	if (str[cont] == '-' || str[cont] == '+')
	{
		if (str[cont] == '-')
			signo *= -1;
		cont++;
	}
	while (str[cont] >= '0' && str[cont] <= '9')
	{
		n = n * 10 + (str[cont] - '0');
		cont++;
	}
	return (n * signo);
}
