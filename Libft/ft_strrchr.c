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

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	cont;

	cont = 0;
	while (s[cont])
		cont++;
	while (cont > 0)
	{
		cont--;
		if (s[cont] == c)
			return ((char *)&s[cont]);
	}
	if (s[cont] == c)
		return ((char *)&s[cont]);
	return (0);
}
/*int main() {
    char *str = "Hola ola";
    char *ptr = ft_strrchr(str, 'o');

    if (ptr != NULL) {
        printf("El caracter se encuentra en la posición: %s\n", ptr);
    } else {
        printf("El caracter no se encuentra en la cadena.\n");
    }
    return 0;
}*/	
