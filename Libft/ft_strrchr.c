/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:47:19 by pportill          #+#    #+#             */
/*   Updated: 2024/03/18 19:23:44 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	int	cont;

	cont = 0;
	while (*s)
	{
		cont++;
		s++;
	}
	while (cont > 0)
	{
		s--;
		if (*s == c)
			return ((char *)s);
		cont--;
	}
	return (0);
}
/*int main() {
    char *str = "Hola ola";
    char *ptr = ft_strrchr(str, 'J');

    if (ptr != NULL) {
        printf("El caracter 'k' se encuentra en la posición: %s\n", ptr);
    } else {
        printf("El caracter 'k' no se encuentra en la cadena.\n");
    }
    return 0;
}*/
