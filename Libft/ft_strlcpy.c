/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:09:15 by pportill          #+#    #+#             */
/*   Updated: 2024/04/11 19:27:18 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	size_src;

	size_src = ft_strlen(src);
	if (size_src + 1 < dstsize)
		ft_memcpy(dest, src, size_src + 1);
	else if (dstsize != 0)
	{
		ft_memcpy(dest, src, dstsize - 1);
		dest[dstsize - 1] = '\0';
	}
	return (size_src);
}
/*int main ()
{
    char dest[5];
    char src[]="hola";
    char dest1[5];
    char src1[]="hola";
    printf("%zu\n", ft_strlcpy(dest,src,5));
    printf("%s",dest);
    printf("%zu\n", strlcpy(dest1,src1,5));
    printf("%s",dest1);
    return 0;
}*/
/*
	size_t	cont;

	cont = 0;
	if (!src)
		return (0);
	while (src[cont] != '\0' && cont + 1 < dstsize)
	{
		dest[cont] = src[cont];
		cont++;
	}
	if (cont < dstsize - 1)
		dest[cont] = '\0';
	while (src[cont] != '\0')
		cont++;
	return (cont);
	*/
