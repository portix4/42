/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:02:48 by pportill          #+#    #+#             */
/*   Updated: 2024/04/16 16:36:55 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		cont;
	char		*pdest;
	const char	*psrc;

	cont = 0;
	pdest = dest;
	psrc = src;
	if (src == NULL && dest == NULL)
		return (dest);
	while (cont < n)
	{
		pdest[cont] = psrc[cont];
		cont++;
	}
	return (dest);
}
