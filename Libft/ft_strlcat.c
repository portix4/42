/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:49:04 by pportill          #+#    #+#             */
/*   Updated: 2024/04/10 19:04:40 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	cont1;
	size_t	cont2;
	size_t	cont3;

	cont1 = 0;
	cont2 = 0;
	cont3 = 0;
	while (dst[cont1] && cont1 < dstsize)
		cont1++;
	while (src[cont2])
		cont2++;
	if (dstsize == 0)
		return (cont2);
	while (src[cont3] && cont1 + cont3 < dstsize - 1)
	{
		dst[cont1 + cont3] = src[cont3];
		cont3++;
	}
	if (cont1 < dstsize)
		dst[cont1 + cont3] = '\0';
	return (cont1 + cont2);
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
