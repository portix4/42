/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:29:09 by pportill          #+#    #+#             */
/*   Updated: 2024/04/16 16:36:50 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*pdst;
	const char	*psrc;
	size_t		cont;

	if (dst == NULL && src == NULL)
		return (dst);
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
