/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:31:31 by pportill          #+#    #+#             */
/*   Updated: 2024/04/16 16:31:30 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			cont;
	unsigned char	*p;

	p = (unsigned char *) b;
	cont = 0;
	while (cont < len)
	{
		p[cont] = (unsigned char)c;
		cont++;
	}
	return (b);
}
