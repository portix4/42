/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:48:34 by pportill          #+#    #+#             */
/*   Updated: 2024/03/22 15:59:24 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	cont;
	int		*ptr;

	cont = 0;
	ptr = (int *)malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	while (cont < count)
	{
		ptr[cont] = 0;
		cont++;
	}
	return ((void *) ptr);
}
