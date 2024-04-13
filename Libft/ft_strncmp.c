/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:36:30 by pportill          #+#    #+#             */
/*   Updated: 2024/04/13 12:23:03 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cont;

	cont = 0;
	while ((s1[cont] || s2[cont]) && cont < n)
	{
		if ((unsigned char)s1[cont] != (unsigned char)s2[cont])
			return ((unsigned char)s1[cont] - (unsigned char)s2[cont]);
		cont++;
	}
	return (0);
}
/*int main() {
	int a;
   int b;
   char c[]= "H";
   char d[]= "Hala";
    a = ft_strncmp(c,d,6);
    printf("Resultado mi funcion: %d\n", a);
    b = strncmp(c,d,6);
    printf("Resultado funcion: %d", b);
    return 0;
}*/
