/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:25:03 by pportill          #+#    #+#             */
/*   Updated: 2024/03/18 20:26:36 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

char	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	cont;

	cont = 0;
	while ((unsigned char *)s && cont < n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((char *)s);
		s++;
		cont++;
	}
	return (0);
}
/*
int main() {
    char *str = "Holka ola";
    char *ptr = ft_memchr(str, 'k',4);

    if (ptr != NULL) {
        printf("El caracter se encuentra en la posición: %s\n", ptr);
    } else {
        printf("El caracter no se encuentra en la cadena.\n");
    }
    return 0;
}*/
