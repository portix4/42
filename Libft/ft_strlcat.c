/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:49:04 by pportill          #+#    #+#             */
/*   Updated: 2024/03/17 18:50:11 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	cont1;
	size_t	cont2;

	cont1 = 0;
	cont2 = 0;
	while (dst[cont1])
	{
		cont1++;
	}
	while (src[cont2] && cont2 < dstsize)
	{
		dst[cont1] = src[cont2];
		cont1++;
		cont2++;
	}
	if (cont2 < dstsize - 1)
		dst[cont1] = '\0';
	return (cont1);
}
/*int main() {
    char dest[]="Adios";
    char src[]="hola";
    char dest1[]="Adios";
    char src1[]="hola";
    printf("%zu\n", ft_strlcat(dest,src,5));
    printf("%s",dest);
    printf("%zu\n", strlcat(dest1,src1,5));
    printf("%s",dest1);
    return 0;
}*/
