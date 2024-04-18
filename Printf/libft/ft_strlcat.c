/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:49:04 by pportill          #+#    #+#             */
/*   Updated: 2024/04/16 16:35:24 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
