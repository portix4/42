/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:53:53 by pportill          #+#    #+#             */
/*   Updated: 2024/04/16 16:34:31 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	cont1;
	size_t	cont2;

	cont1 = 0;
	cont2 = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (haystack[cont1] != '\0' && cont1 < len)
	{
		cont2 = 0;
		if (haystack[cont1] == needle[cont2])
		{
			while (needle[cont2] != '\0'
				&& haystack[cont1 + cont2] == needle[cont2]
				&& (cont1 + cont2) < len)
				cont2++;
			if (needle[cont2] == '\0')
				return ((char *)haystack + cont1);
		}
		cont1++;
	}
	return (0);
}
