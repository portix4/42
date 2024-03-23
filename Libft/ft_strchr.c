/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:10:32 by pportill          #+#    #+#             */
/*   Updated: 2024/03/18 18:46:53 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (0);
}
/*
int main() {
    const char *str = "Hola mundo";
    char *ptr = ft_strchr(str, 'm');
    
    if (ptr != NULL) {
        printf("El caracter 'm' se encuentra en la posición: %s\n", ptr);
    } else {
        printf("El caracter 'm' no se encuentra en la cadena.\n");
    }
    
    return 0;
}*/
