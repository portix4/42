/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:25:03 by pportill          #+#    #+#             */
/*   Updated: 2024/04/10 18:13:28 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				cont;
	const unsigned char	*str;

	cont = 0;
	str = (const unsigned char *)s;
	while (cont < n)
	{
		if (str[cont] == (unsigned char)c)
			return ((char *)&str[cont]);
		cont++;
	}
	return (0);
}
/*int main() {
    char *str = "Holka ola";
    char *ptr = ft_memchr(str, 'k',4);

    if (ptr != NULL) {
        printf("El caracter se encuentra en la posición: %s\n", ptr);
    } else {
        printf("El caracter no se encuentra en la cadena.\n");
    }
    return 0;
}*/
