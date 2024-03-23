/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:01:40 by pportill          #+#    #+#             */
/*   Updated: 2024/03/22 18:00:07 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static size_t	ft_strlen(const char *s)
{
	size_t	cont;

	cont = 0;
	while (*s)
	{
		cont++;
		s++;
	}
	return (cont);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	cont;

	cont = 0;
	ptr = (char *)malloc((ft_strlen(s) + 1) * len);
	if (ptr == NULL)
		return (NULL);
	while (cont < len)
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
