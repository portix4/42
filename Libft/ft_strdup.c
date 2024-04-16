/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:07:25 by pportill          #+#    #+#             */
/*   Updated: 2024/04/16 16:37:55 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		cont;

	cont = 0;
	ptr = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (s1[cont] != '\0')
	{
		ptr[cont] = s1[cont];
		cont++;
	}
	ptr[cont] = '\0';
	return (ptr);
}
