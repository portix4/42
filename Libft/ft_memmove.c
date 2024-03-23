/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:29:09 by pportill          #+#    #+#             */
/*   Updated: 2024/03/22 12:41:31 by pportill         ###   ########.fr       */
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

	pdst = dst;
	psrc = src;
	if (psrc < pdst)
	{
		cont = len;
		while (len > 0)
		{
			cont--;
			pdst[cont] = psrc[cont];
		}
	}
	else
	{
		cont = 0;
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
