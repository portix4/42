/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 13:05:40 by pportill          #+#    #+#             */
/*   Updated: 2024/04/10 18:41:21 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
#include <stddef.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*aux;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	aux = ft_substr(s1, start, end - start);
	return (aux);
}
/*
 * La
string resultante se devuelve con una reserva de
malloc(3
int main()
{
    char *s1="aaaHolaComoEstasaaaa";
    char *set="aa";
    char *check = ft_strtrim(s1,set);
    printf("--> %s",check);
    free(check);
}
*/
