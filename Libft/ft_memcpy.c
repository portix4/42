/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:02:48 by pportill          #+#    #+#             */
/*   Updated: 2024/03/13 13:27:00 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		cont;
	char		*pdest;
	const char	*psrc;

	cont = 0;
	pdest = dest;
	psrc = src;
	while (cont < n)
	{
		pdest[cont] = psrc[cont];
		cont++;
	}
}
/*int main()
{
    char str1[] = "Hola";
    char str2[] = "Adi";
    char str3[] = "Hola";
    char str4[] = "Adi";
    memcpy(str1, str2,4);
    ft_memcpy(str3, str4, 4);
	printf("C: %s\n", str1);  
    printf("P: %s", str3); 
 
    return 0;
}*/