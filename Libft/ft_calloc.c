/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:48:34 by pportill          #+#    #+#             */
/*   Updated: 2024/04/10 15:52:35 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
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
/*int main()
{
    int *array;
    size_t n = 10; 
    size_t i = 0;

    array = (int *)ft_calloc(n, sizeof(int));
    if (array == NULL)
		return (1);
    while (i < n)
        printf("array[%zu] = %d\n", i, array[i]);
    free(array);
    return 0;
}*/
