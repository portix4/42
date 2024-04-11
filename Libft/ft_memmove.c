/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:29:09 by pportill          #+#    #+#             */
/*   Updated: 2024/04/11 17:44:58 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*pdst;
	const char	*psrc;
	size_t		cont;

	if (dst == NULL || src == NULL)
		return (NULL);
	pdst = (char *)dst;
	psrc = (char *)src;
	cont = 0;
	if (dst > src)
	{
		while (len-- > 0)
			pdst[len] = psrc[len];
	}
	else
	{
		while (cont < len)
		{
			pdst[cont] = psrc[cont];
			cont++;
		}
	}
	return (dst);
}
/*
int main() {
    char src[] = "Source string";
    char dst[20];
	char src1[] = "Source string";
	char dst1[20];

	memmove(dst1,src1,13+1);
    ft_memmove(dst, src, 13+ 1);

    printf("Yo: %s\n", dst);
	printf("C: %s\n", dst1);

    return 0;
}*/
