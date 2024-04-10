/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:53:53 by pportill          #+#    #+#             */
/*   Updated: 2024/04/10 19:12:09 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	cont1;
	size_t	cont2;

	cont1 = 0;
	cont2 = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (haystack[cont1] != '\0' && cont1 < len)
	{
		cont2 = 0;
		if (haystack[cont1] == needle[cont2])
		{
			while (needle[cont2] != '\0'
				&& haystack[cont1 + cont2] == needle[cont2]
				&& (cont1 + cont2) < len)
				cont2++;
			if (needle[cont2] == '\0')
				return ((char *)haystack + cont1);
		}
		cont1++;
	}
	return (0);
}
/*int main()
{
    const char s1[]="Hola como estas";
    const char s2[]="as";
    char *s3=ft_strnstr(s1, s2, 16);
    if (s3 == NULL)
        printf("No está");
    else
        printf("Puntero aqui -> %s", s3);
	return 0;
}*/
