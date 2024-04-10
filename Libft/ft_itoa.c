/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:24:12 by pportill          #+#    #+#             */
/*   Updated: 2024/04/10 18:38:45 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

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

	m = n;
	cont = ft_count(n);
	if (n == -2147483648)
	{
		ptr = (char *)malloc((11 + 1) * sizeof(char));
		ptr = "-2147483648";
		return (ptr);
	}
	if (m == 0)
	{
		ptr = (char *)malloc((1 + 1) * sizeof(char));
		ptr[0] = '0';
		ptr[1] = '\0';
	}
	else
	{
		ptr = (char *)malloc((cont + 1) * sizeof(char));
		ft_fill(ptr, m, cont);
	}
	return (ptr);
}
/*int main ()
{
    int a=0;
    printf("--> %s", ft_itoa(a));
    return (0);
}*/
