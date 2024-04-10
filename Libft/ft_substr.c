/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:01:40 by pportill          #+#    #+#             */
/*   Updated: 2024/04/10 18:41:26 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	cont;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	ptr = (char *)malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	cont = 0;
	while (cont < len && s[start + cont] != '\0')
	{
		ptr[cont] = s[start + cont];
		cont++;
	}
	ptr[cont] = '\0';
	return (ptr);
}
/*
int main ()
{
    const char *s1="Pablo";
    char *result = ft_substr(s1,4,1);
    printf("%s", result);
    free(result);
    return (0);
}*/
