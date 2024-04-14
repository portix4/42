/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:10:32 by pportill          #+#    #+#             */
/*   Updated: 2024/04/14 12:24:52 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	cont;

	cont = 0;
	while (s[cont])
	{
		if (s[cont] == (char)c)
			return (&((char *)s)[cont]);
		cont++;
	}
	if ((char)c == '\0')
		return (&((char *)s)[cont]);
	return (0);
}
