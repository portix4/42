/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:00:34 by pportill          #+#    #+#             */
/*   Updated: 2024/03/22 13:18:02 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(const char *str)
{
	int	cont_signos;
	int	n;
	int	cont;

	cont_signos = 0;
	n = 0;
	cont = 0;
	while (str[cont] == ' ' || str[cont] == '\t' || str[cont] == '\n'
		|| str[cont] == '\v' || str[cont] == '\f' || str[cont] == '\r')
		cont++;
	while (str[cont] == '-' || str[cont] == '+' )
	{
		if (str[cont] == '-')
			cont_signos++;
		cont++;
	}
	while (str[cont] >= '0' && str[cont] <= '9')
	{
		n = n * 10 + (str[cont] - '0');
		cont++;
	}
	if (cont_signos % 2 != 0)
		n = n * -1;
	return (n);
}
/*int main ()
{
    printf("Función C: %d", atoi("-dd 23+-4234"));
    printf("\nRes: %d", ft_atoi("-dd 23+-4234"));

    return 0;
}*/
