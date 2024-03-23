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

size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	c;
	size_t	c_s1;
	size_t	c_s2;

	if (!s1 || !s2)
		return (NULL);
	c_s1 = ft_strlen(s1);
	c_s2 = ft_strlen(s2);
	ptr = (char *)malloc((c_s1 + c_s2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcat(ptr, s1, c_s1);
	ft_strlcat(ptr, s2, c_s2);
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
/*
while (s1[cont_s] != '\0')
	{
		ptr[cont_ptr] = s1[cont_s];
		cont_ptr++;
		cont_s++;
	}
	cont_s = 0;
	while (s2[cont_s] != '\0')
	{
		ptr[cont_ptr] = s2[cont_s];
		cont_ptr++;
		cont_s++;
	}
	ptr[cont_ptr] = '\0';
*/	
