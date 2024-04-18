/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:25:03 by pportill          #+#    #+#             */
/*   Updated: 2024/04/16 16:30:58 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				cont;
	const unsigned char	*str;

	cont = 0;
	str = (const unsigned char *)s;
	while (cont < n)
	{
		if (str[cont] == (unsigned char)c)
			return ((char *)&str[cont]);
		cont++;
	}
	return (0);
}
