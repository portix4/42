/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:04:44 by pportill          #+#    #+#             */
/*   Updated: 2024/03/23 12:52:48 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
#include <stddef.h>

static size_t ft_strlen(const char *s);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int 	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	ptr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)+ 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*int main()
{
	char *s1="Holo";
	char *s2="Odios";
	char *s3=ft_strjoin(s1,s2);
	printf("-->%s\n",s3);
	free(s3);
}*/

