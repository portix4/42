/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:24:12 by pportill          #+#    #+#             */
/*   Updated: 2024/03/26 20:00:51 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

static void	ft_fill(char *ptr, int n, size_t cont)
{
	ptr[cont] = '\0';
	if (n < 0)
	{
		ptr[0] = '-';
		n *= -1;
	}
	while (n % 10 > 0)
	{
		cont--;
		ptr[cont] = n % 10 + '0';
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	size_t	cont;
	int		m;
	char	*ptr;

	cont = 0;
	m = n;
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
	if (m == 0)
	{
		ptr = (char *)malloc(1 * sizeof(char *));
		ptr[0] = '0';
	}
	else
	{
		ptr = (char *)malloc(cont * sizeof(char *));
		ft_fill(ptr, m, cont);
	}
	return (ptr);
}
int main ()
{
    int a=-1234;
    printf("--> %s", ft_itoa(a));
    return (0);
}
