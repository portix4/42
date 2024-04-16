/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:47:19 by pportill          #+#    #+#             */
/*   Updated: 2024/04/16 16:34:22 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*aux_null;
	char	aux_c;

	aux_null = NULL;
	i = 0;
	aux_c = (char) c;
	while (s[i])
	{
		if (s[i] == aux_c)
			aux_null = (char *)&s[i];
		i++;
	}
	if (s[i] == aux_c)
		aux_null = (char *)&s[i];
	return (aux_null);
}
