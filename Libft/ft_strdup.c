/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:07:25 by pportill          #+#    #+#             */
/*   Updated: 2024/03/22 16:56:12 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
/*int main()
{
    const char *s1="hola";
    printf("Yo: %s",ft_strdup(s1));
    printf("\nC: %s",strdup(s1));

    return (0);
}*/
