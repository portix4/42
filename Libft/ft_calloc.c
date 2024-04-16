/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:48:34 by pportill          #+#    #+#             */
/*   Updated: 2024/04/16 16:29:43 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			cont;
	size_t			total;
	unsigned char	*ptr;

	cont = 0;
	total = count * size;
	ptr = (unsigned char *)malloc(total);
	if (ptr == NULL)
		return (NULL);
	while (cont < total)
	{
		ptr[cont] = 0;
		cont++;
	}
	return ((void *) ptr);
}
